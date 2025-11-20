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
    struct node *PTR;
    struct node *PTR1;
    int info;


    PTR = malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d", &info);
    if (PTR == NULL)
    {
        printf("Overflow\n");
        exit(1);
    }
    else
    {
        PTR->data = info;
        PTR->link = head;
        head = PTR;
    }
    

    PTR1 = head;
    while(PTR1 != NULL)
    {
        printf("%d ->", PTR1 -> data);
        PTR1 = PTR1 -> link;
    }


    return 0;
}
