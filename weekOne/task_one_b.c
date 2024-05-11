#include <stdio.h>
#include <stdlib.h>

// Linked list node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to add element to the beginning of the linked list
void addElementToLinkedList(struct Node **head, int element) {
    // Create a new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Assign data to the new node
    newNode->data = element;

    // Set the next of new node as head
    newNode->next = *head;

    // Move the head to point to the new node
    *head = newNode;
}

// Function to print the linked list
void printLinkedList(struct Node *head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    // Add elements to the linked list
    for (int i = 10; i >= 1; i--) {
        addElementToLinkedList(&head, i);
    }

    // Print the linked list before adding new element
    printLinkedList(head);

    // Add a new element to the beginning
    addElementToLinkedList(&head, 0);

    // Print the linked list after adding new element
    printLinkedList(head);

    return 0;
}
