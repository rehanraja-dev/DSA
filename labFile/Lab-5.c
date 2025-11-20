#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;  

void insert_at_position(int data, int position);
void delete_at_position(int position);
void display();

int main() {
    int choice, data, pos;

    while (1) {
        printf("\n Name:- Rehan Raja \n");
        printf(" Enrolment:- 0187CS241174 \n\n\n");
        printf("1. Insert at position\n");
        printf("2. Delete at position\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                insert_at_position(data, pos);
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                delete_at_position(pos);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

void insert_at_position(int data, int position) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = data;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    if (position == 1) {
        struct node *temp = head;
        while (temp->next != head)
            temp = temp->next;  

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (temp->next == head && position != 2) {
        printf("Position out of range, inserting at end.\n");
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_at_position(int position) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head, *prev;

    if (position == 1) {
        if (head->next == head) {
            printf("Deleted: %d\n", head->data);
            free(head);
            head = NULL;
            return;
        }

        while (temp->next != head)
            temp = temp->next;  

        struct node *toDelete = head;
        head = head->next;
        temp->next = head;
        printf("Deleted: %d\n", toDelete->data);
        free(toDelete);
        return;
    }

    temp = head;
    for (int i = 1; i < position - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    if (temp->next == head) {
        printf("Position out of range!\n");
        return;
    }

    struct node *toDelete = temp->next;
    temp->next = toDelete->next;
    printf("Deleted: %d\n", toDelete->data);
    free(toDelete);
}

void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}