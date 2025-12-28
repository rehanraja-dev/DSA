#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *pre;
    struct node *next;
};

int main()
{
    struct node *start = NULL;
    struct node *ptr, *ptr1;
    int choice, pos, info, i;
    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    while (1)
    {
        printf("\n--- DOUBLY LINKED LIST MENU ---\n");
        printf("1. Insert at specific position\n");
        printf("2. Delete from specific position\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:   // INSERT
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter data: ");
            scanf("%d", &info);

            ptr = (struct node*)malloc(sizeof(struct node));
            if (ptr == NULL)
            {
                printf("Overflow!!\n");
                break;
            }

            ptr->data = info;

            /* Insert at beginning */
            if (pos == 1)
            {
                ptr->pre = NULL;
                ptr->next = start;

                if (start != NULL)
                    start->pre = ptr;

                start = ptr;
            }
            else
            {
                ptr1 = start;
                for (i = 1; i < pos - 1 && ptr1 != NULL; i++)
                {
                    ptr1 = ptr1->next;
                }

                if (ptr1 == NULL)
                {
                    printf("Invalid position!\n");
                    free(ptr);
                }
                else
                {
                    ptr->next = ptr1->next;
                    ptr->pre = ptr1;

                    if (ptr1->next != NULL)
                        ptr1->next->pre = ptr;

                    ptr1->next = ptr;
                }
            }
            break;

        case 2:   // DELETE
            if (start == NULL)
            {
                printf("List is empty!\n");
                break;
            }

            printf("Enter position to delete: ");
            scanf("%d", &pos);

            /* Delete first node */
            if (pos == 1)
            {
                ptr = start;
                start = start->next;

                if (start != NULL)
                    start->pre = NULL;

                free(ptr);
            }
            else
            {
                ptr1 = start;
                for (i = 1; i < pos && ptr1 != NULL; i++)
                {
                    ptr1 = ptr1->next;
                }

                if (ptr1 == NULL)
                {
                    printf("Invalid position!\n");
                }
                else
                {
                    ptr1->pre->next = ptr1->next;

                    if (ptr1->next != NULL)
                        ptr1->next->pre = ptr1->pre;

                    free(ptr1);
                }
            }
            break;

        case 3:   // DISPLAY
            if (start == NULL)
            {
                printf("List is empty!\n");
            }
            else
            {
                ptr1 = start;
                printf("DLL: ");
                while (ptr1 != NULL)
                {
                    printf("%d <-> ", ptr1->data);
                    ptr1 = ptr1->next;
                }
                printf("NULL\n");
            }
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }
}

