#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    struct node *start = NULL;
    struct node *ptr;
    struct node *ptr1;
    int info;

    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d",&info);

    if (ptr == NULL)
    {
        printf("Overflow!!");
        exit(1);
    }
    else
    {
        ptr -> data = info;
        ptr -> pre = NULL;
        ptr -> next = start;
        start = ptr;
    }
    ptr1 = start;
    while (ptr1 != NULL)
    {
        printf("%d ->", ptr1 -> data);
        ptr1 = ptr1 -> next;
    }
    
}