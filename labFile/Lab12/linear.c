#include <stdio.h>

int main()
{
    int a[50], n, i, key, count = 0;
        printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("Element not found\n");
    else
        printf("Total occurrences = %d\n", count);

    return 0;
}
