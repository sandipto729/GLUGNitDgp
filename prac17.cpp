#include<iostream>
#include<map>
using namespace std;

class Node {
public:
    int coeff;
    int power;
    Node* next;
    Node(int val1, int val2) {
        this->coeff = val1;
        this->power = val2;
        this->next = NULL;
    }
};

Node* multiply(Node* head1, Node* head2) {
    map<int, int> mp;
    Node* temp1 = head1;
    while (temp1 != NULL) {
        Node* temp2 = head2;
        while (temp2 != NULL) {
            mp[temp1->power + temp2->power] += temp1->coeff * temp2->coeff;
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    Node* pre = NULL, * head = NULL, * p;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        p = new Node(it->second, it->first);
        p->next = NULL;
        if (!head)
            head = p;
        else {
            pre->next = p;
        }
        pre = p;
    }
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->coeff << " X ^ " << temp->power << " + ";
        temp = temp->next;
    }
}

int main() {
    Node* head1 = new Node(2, 3);
    head1->next=new Node(5,4);
    head1->next->next=new Node(7,5);

    Node* head2 = new Node(2, 0);
    head2->next=new Node(7,1);
    head2->next->next=new Node(7,2);
    Node* head3 = multiply(head1, head2);
    display(head3);
}
