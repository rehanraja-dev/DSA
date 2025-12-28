#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int cq[MAX];
int front = -1;
int rear = -1;

void insert()
{
    int item;

    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Circular Queue Overflow!\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &item);

    /* First insertion */
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    /* Wrap rear */
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }

    cq[rear] = item;
    printf("Element inserted successfully\n");
}

void delete()
{
    if (front == -1)
    {
        printf("Circular Queue Underflow!\n");
        return;
    }

    printf("Deleted element: %d\n", cq[front]);

    /* Only one element */
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    /* Wrap front */
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Circular Queue is empty\n");
        return;
    }

    printf("Circular Queue elements: ");

    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
            printf("%d ", cq[i]);
    }
    else
    {
        for (i = front; i < MAX; i++)
            printf("%d ", cq[i]);
        for (i = 0; i <= rear; i++)
            printf("%d ", cq[i]);
    }

    printf("\n");
}

int main()
{
    int choice;
    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    while (1)
    {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
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
}
