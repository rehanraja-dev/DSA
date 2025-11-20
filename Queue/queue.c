#include<stdio.h>
#include<stdlib.h>

int main(){

    int choice,del ,data, front=-1, rear=-1;
    int maxSize = 5;
    int queue[5];
    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  

        switch (choice)
        {
        case 1:
            
            if (rear == maxSize-1)
            {
                printf("Overflow!!");
        
            }
            else
            {
                if (rear== -1 && front== -1)
                {
                    rear = 0;
                    front = 0;
                }
                else
                {
                    rear += 1;
                }
                printf("\nEnter data to be inserted: ");
                scanf("%d", &data);
                queue[rear] = data;
                printf("\nData %d is added successfuly!!\n",data);
            }
            break;
        case 2:
            if (rear == -1 && front == -1)
            {
                printf("Underflow!!");
            
            }
            else
            {
                if(front == rear)
                {
                    del = front;
                    front = -1;
                    rear = -1;
                }
                else
                {
                    del = front;
                    front = front + 1;
                }
                printf("\nData is %d deleted successfuly!\n",queue[del]);
            }
            break;
        case 3:
            printf("\n\n---Queue Elements---\n\n");
            for (int i = front; i <=rear; i++)
            {
                if (front == -1)
                {
                    printf("Queue is empty!!");
                }
                else
                {
                    printf("%d ->",queue[i]);
                }
            }
            printf("\n--------------------\n");
            
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid Choice!!");
            break;
        }
    }

    return 0;
}