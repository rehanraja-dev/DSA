#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main()
{
    int info;
    int nodeNum;
    struct node *newNode, *temp;
    struct node *preNode = NULL;
    struct node *head = NULL;

    printf("Enter number, how many nodes you want: ");
    scanf("%d",&nodeNum);

    for(int i = 1; i <= nodeNum; i++)
    {
        printf("Enter value to be stored at Node %d: ",i);
        scanf("%d",&info);

        newNode = (struct node * )malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Overflow!!");
            exit(1);
        }
        else
        {
            newNode -> data = info;
            newNode -> link = NULL;
            if (head != NULL)
            {
                preNode -> link = newNode;
            }
            else
            {
                head = newNode;
            }
        }
        preNode = newNode;

    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d ->  ",temp -> data);
        temp = temp -> link;
    }
    printf("NULL\n");

// ---------------------------------------------------- //

    printf("\n--- Insertion At Middle ---\n");
    int middle = nodeNum / 2;

    temp = head;
    for (int i = 1; i < middle; i++) {
        temp = temp->link;
    }

    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Overflow!!");
        exit(1);
    }

    printf("Enter data to be inserted: ");
    scanf("%d", &info);
    newNode->data = info;

    newNode->link = temp->link;
    temp->link = newNode;

    printf("\nLinked List After Insertion:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");


// --------------------------------------------------------------//
int deleNode;
temp = head;
printf("Enter which node you want to delete: ");
scanf("%d",&deleNode);

for (int i = 1; i < deleNode+1; i++)
{
    if (i == deleNode-1)
    {
        
    }
    
}


    return 0;
}
