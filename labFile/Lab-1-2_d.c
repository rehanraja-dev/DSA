#include <stdio.h>

int main()
{
    int A[2][2], B[2][2], sum[2][2];
    int rows, cols, i, j;
    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    printf("Enter number of rows and columns");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Result\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
    }
    return 0;
}