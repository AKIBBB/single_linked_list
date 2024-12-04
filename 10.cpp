#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to remove duplicates from a sorted linked list
void removeDuplicates(Node* head) {
    if (!head) return; // If the list is empty, there's nothing to do

    Node* current = head;

    // Traverse the list
    while (current != nullptr && current->next != nullptr) {
        if (current->data == current->next->data) {
            // If duplicate, remove the next node
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp; // Free memory of the removed node
        } else {
            // Move to the next node if no duplicate
            current = current->next;
        }
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test removeDuplicates
int main() {
    // Create a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    removeDuplicates(head);

    cout << "List After Removing Duplicates: ";
    printList(head);

    return 0;
}
