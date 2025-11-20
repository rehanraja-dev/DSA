#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    int info, numNode;
    struct node *newNode;
    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *curRef_ = NULL;
    struct node *preRef_ = NULL;

    printf("Enter number of node you want: ");
    scanf("%d",&numNode);

    for (int i = 1; i <= numNode; i++)
    {
        printf("Enter data to be inserted at node %d: ",i);
        scanf("%d",&info);

        newNode = (struct node *)malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Overflow!!");
            exit(1);
        }
        else
        {
            newNode -> data = info;
            newNode -> pre = preRef_;
            newNode -> next = NULL;
            if (i != 1)
            {
                curRef_ -> next = newNode;
            }
            else
            {
                head = newNode;
            }
            curRef_ = newNode;
            preRef_ = newNode;
            tail = newNode;
        }
    }

    printf("\n---Printing at the Tail---\n");
    while (tail != NULL)
    {
        
        printf("%d -> ",tail -> data);
        tail = tail -> pre;
    }
    printf("NULL\n");

    printf("\n---Printing at the Head---\n");
    while (head != NULL)
    {
        printf("%d -> ",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
    
    return 0;
}
