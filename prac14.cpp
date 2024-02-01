#include<iostream>
#include<stack>
using namespace std;

class queue {
    stack<int> st;

public:
    void enque(int val) {
        st.push(val);
    }

    void deque() {
        stack<int> tempo;
        while (!st.empty()) {
            tempo.push(st.top());
            st.pop();
        }
        if (!tempo.empty()) {
            tempo.pop();
        }
        while (!tempo.empty()) {
            st.push(tempo.top());
            tempo.pop();
        }
    }

    int front() {
        stack<int> tempo;
        while (!st.empty()) {
            tempo.push(st.top());
            st.pop();
        }
        if (!tempo.empty()) {
            int frontValue = tempo.top();
            while (!tempo.empty()) {
                st.push(tempo.top());
                tempo.pop();
            }
            return frontValue;
        }
        return -1; // Return -1 when the queue is empty
    }

    bool isEmpty() {
        return st.empty();
    }
};

int main() {
    queue qu;
    qu.enque(1);
    qu.enque(2);
    qu.enque(3);
    qu.enque(4);
    qu.enque(5);

    cout << qu.front() << endl;
    qu.deque();
    cout << qu.front() << endl;
    qu.deque();
    cout << qu.front() << endl;
    qu.deque();
    cout << qu.front() << endl;
    qu.deque();

    return 0;
}
