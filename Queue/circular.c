#include<stdio.h>
#include<stdlib.h>


int front = -1;
int rear = -1;
int const maxSize = 5;
int queue[5];

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("\n---Queue elements---\n");

    int i = front;
    while (1) {
        printf("%d\n", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % maxSize;   
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("\n---Queue Menu---\n");
        printf("1. To Enter\n");
        printf("2. To Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

           
            case 1:
                if ((rear + 1) % maxSize == front) {
                    printf("Queue Overflow!\n");
                }
                else {
                    printf("Enter Data to enter: ");
                    scanf("%d", &data);

                    if (front == -1 && rear == -1) {
                        front = 0;
                        rear = 0;
                    }
                    else {
                        rear = (rear + 1) % maxSize;   
                    }

                    queue[rear] = data;
                }
                break;

      
            case 2:
                if (front == -1 && rear == -1) {
                    printf("Queue Underflow!\n");
                }
                else {
                    if (front == rear) {
                        front = -1;
                        rear = -1;
                    }
                    else {
                        front = (front + 1) % maxSize;  
                    }
                }
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