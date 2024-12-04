#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

//
bool detectAndRemoveCycle(Node* head) {
    if (head == nullptr || head->next == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         
        fast = fast->next->next;   

        if (slow == fast) {        
            Node* start = head;
            if (slow == head) {
                while (fast->next != slow) {
                    fast = fast->next;
                }
            } else {
                
                while (start->next != slow->next) {
                    start = start->next;
                    slow = slow->next;
                }
            }

            
            slow->next = nullptr;

            return true;
        }
    }

    return false; 
}


void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(20);

    head->next->next->next->next->next = head->next->next;

    if (detectAndRemoveCycle(head)) {
        cout << "Cycle detected and removed." << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    cout << "Linked List after removing the cycle: ";
    printList(head);

    return 0;
}
