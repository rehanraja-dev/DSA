#include<stdio.h>
#include<stdlib.h>

int main(){

    int choice,tempD ,data,top = -1;
    int n = 5;
    int stack[5];
    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  

        switch (choice)
        {
        case 1:
            printf("\nEnter data to be inserted: ");
            scanf("%d", &data);
            if (top == n-1)
            {
                printf("Overflow!!");
                exit(1);
            }
            else
            {
                top = top + 1;
                stack[top]=data;
                printf("\nData %d is added successfuly!!\n",data);
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Underflow!!");
                exit(1);
            }
            else
            {
                tempD = stack[top];
                top = top-1;
                printf("\nData %d is deleted successfuly!\n",data);
            }
            break;
        case 3:
            printf("\n\n---Stack Elements---\n\n");
            for (int i = 0; i <=top; i++)
            {
                printf("%d\n",stack[i]);
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