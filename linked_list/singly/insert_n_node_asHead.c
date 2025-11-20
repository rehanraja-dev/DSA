#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    struct node *newNode;
    struct node *temp;
    int info;
    int numNode;

    printf("Enter numbers how many node you want: ");
    scanf("%d",&numNode);

    for (int i = 1; i <= numNode; i++)
    {
    
        newNode = (struct node* )malloc(sizeof(struct node));
        printf("Enter the data to be inserted at node : ");
        scanf("%d", &info);
        if (newNode == NULL)
        {
            printf("Overflow\n");
            exit(1);
        }
        else
        {
            newNode->data = info;
            newNode->link = head;
            head = newNode;
        }
        
        if (i == numNode )
        {
            temp = head;
            printf("\n ---List After Insertion--\n");
            while(temp != NULL)
            {
                printf("%d ->", temp -> data);
                temp = temp -> link;
            }
        }        
}
printf("NULL\n");

printf("\n---Insert at Middle--\n");
temp = head;

for (int i = 1; i < numNode/2; i++)
{
    temp = temp -> link;
}
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter data to be inserted in new node: ");
scanf("%d",&info);

newNode -> link = temp -> link;
newNode -> data = info;
temp -> link = newNode;

printf("Linked list after Insertion\n");

temp = head;
while (temp != NULL)
{
    printf("%d -> ",temp -> data);
    temp = temp -> link;
}
printf("NULL\n");

    return 0;
}