#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};


Node* findMiddleNode(Node* head) {
    if (head == nullptr) return nullptr;

    Node* slow = head;  
    Node* fast = head;  

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;       
        fast = fast->next->next;  
    }

    return slow;
}


void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test findMiddleNode
int main() {
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    cout << "Original List: ";
    printList(head);

    Node* middle = findMiddleNode(head);

    if (middle != nullptr) {
        cout << "Middle Node: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}
