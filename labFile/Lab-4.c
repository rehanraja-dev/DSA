#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
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
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Memory not allocated.\n");
        return;
    }

    newNode->data = data;
    newNode->link = NULL;

    if (position == 1) {
        newNode->link = head;
        head = newNode;
        return;
    }

    temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
    } else {
        newNode->link = temp->link;
        temp->link = newNode;
    }
}

void delete_at_position(int position) {
    struct node *temp, *prev;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;

    if (position == 1) {
        head = head->link;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    if (temp == NULL || temp->link == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev = temp->link;
    temp->link = prev->link;
    printf("Deleted: %d\n", prev->data);
    free(prev);
}

void display() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}
