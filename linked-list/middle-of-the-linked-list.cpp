// Find middle of linked list (easy method)

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to find middle node
void middle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // slow moves 1 step, fast moves 2 steps
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element = " << slow->data;
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    middle(head);

    return 0;
}