#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

void insertAtTail(Node **head, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    Node *temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

void deleteHead(Node **head) {
    Node *temp = *head;
    *head = temp->next;
}

void deleteTail(Node **head) {
    Node *temp = *head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;
}

void deleteValue(Node **head, int value) {
    Node *temp = *head;
    Node *prev;
    while(temp->value != value) {
        prev = temp;
        temp = temp->next;
    }
    if(temp->value == value) {
        if(temp->next != NULL) {
            prev->next = temp->next;
        }else {
            prev->next = NULL;
        }
    }else {
        printf("Value %d not found.\n", value);
    }
}

int main(void) {
    Node *head;
    head = (Node*)malloc(sizeof(Node));
    head->value=10;

    Node *second = (Node*)malloc(sizeof(Node));
    second->value=20;
    head->next = second;
    second->next = NULL;

    printList(head);
    deleteHead(&head);
    insertAtTail(&head, 70);
    insertAtTail(&head, 80);
    insertAtTail(&head, 40);
    insertAtTail(&head, 90);
    printList(head);
    deleteValue(&head, 40);
    printList(head);
    deleteValue(&head, 70);
    printList(head);
    deleteTail(&head);
    printList(head);
    deleteValue(&head, 40);
    printList(head);
}