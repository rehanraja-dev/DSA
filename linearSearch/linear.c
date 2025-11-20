#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int key,i;
    printf("Enter the element between 1-10 to find its location: ");
    scanf("%d",&key);
    for (i = 0; i <= 9; i++)
    {
        if (key==a[i])
        {
            printf("Location of element-%d is: %d",key,i+1);
            break;
        }        
    }
    if(i == 10){
        printf("\nSearching Unsuccessful!!");
    }
    
    return 0;
}