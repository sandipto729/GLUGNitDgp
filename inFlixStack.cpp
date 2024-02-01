#include<iostream>
#include<stack>
using namespace std;

int cal(int v1, int v2, char op) {
    if (op == '+') {
        return v1 + v2;
    }
    if (op == '-') {
        return v1 - v2;
    }
    if (op == '*') {
        return v1 * v2;
    }
    if (op == '/') {
        return v1 / v2;
    }
}

int preference(char ch) {
    if (ch == '-' || ch == '+') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

int inFlix(string str) {
    stack<int> nums;
    stack<char> oper;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            nums.push(str[i] - '0');
        }
        else if (str[i] == '(') {
            oper.push(str[i]);
        }
        else if (str[i] == ')') {
            while (!oper.empty() && oper.top() != '(') {
                char op = oper.top();
                oper.pop();
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                int ans = cal(b, a, op);
                nums.push(ans);
            }
            oper.pop(); // Pop the '('
        }
        else {
            while (!oper.empty() && preference(oper.top()) >= preference(str[i])) {
                char op = oper.top();
                oper.pop();
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                int ans = cal(b, a, op);
                nums.push(ans);
            }
            oper.push(str[i]);
        }
    }

    while (!oper.empty()) {
        char op = oper.top();
        oper.pop();
        int a = nums.top();
        nums.pop();
        int b = nums.top();
        nums.pop();
        int ans = cal(b, a, op);
        nums.push(ans);
    }

    return nums.top();
}

int main() {
    string str = "2*(5+(6-3))/8-1";
    cout << inFlix(str);
    return 0;
}
