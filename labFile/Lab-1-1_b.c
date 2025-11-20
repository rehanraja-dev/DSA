#include <stdio.h>

int main()
{
    int n, i;
    float array[100];
    float largest;

    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    largest = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    printf("The largest element is: %.2f\n", largest);

    return 0;
}