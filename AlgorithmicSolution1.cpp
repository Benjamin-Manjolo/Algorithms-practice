#include <iostream>

// Define the structure of a singly linked list node
struct Node {
    int data;
    Node* next;
};

// Function to create a linked list from an array
Node* createList(int arr[], int size) {
    if (size == 0) return nullptr;

    Node* head = new Node{arr[0], nullptr};
    Node* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new Node{arr[i], nullptr};
        current = current->next;
    }

    return head;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;

    while (current != nullptr) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Entry point
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createList(arr, size);

    std::cout << "Original list: ";
    printList(head);

    head = reverseList(head);

    std::cout << "Reversed list: ";
    printList(head);

    return 0;
}
