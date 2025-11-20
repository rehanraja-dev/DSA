#include <stdio.h>

int main()
{
    int i,n;
    float sum=0,average;
    
    printf("\n Name:- Rehan Raja \n");
    printf(" Enrolment:- 0187CS241174 \n\n\n");
    printf("Enter the number of element: ");
    scanf("%d",&n);
    float array[n];
    printf("Enter numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&array[i]);
        sum=sum+array[i];
    }
    average=sum/n;
    printf("Average is %.2f",average);
    
    return 0;
}