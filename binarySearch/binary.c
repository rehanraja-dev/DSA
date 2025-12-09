#include<stdio.h>

int main(){
    int sortedA[] = {1,2,3,4,5,6,7,8,2};
    int n = sizeof(sortedA)/sizeof(sortedA[0]);
    int target;
    int lb = 0, ub = n - 1;
    int found = 0;
    for(int i = 0; i < n-1; i++){
        if (sortedA[i]>sortedA[i+1])
        {
            printf("Array is not sorted!!");
            return 0;
        }
    }
    printf("Enter data to be found 1-9: ");
    scanf("%d",&target);
    while(lb <= ub){
        int mid = (lb + ub) / 2;
        if(sortedA[mid] == target){
            found = 1;
            break;
        }
        else if(sortedA[mid] < target){
            lb = mid + 1;
        }
        else{
            ub = mid - 1;
        }
    }
    if(found){
        printf("Element %d found in the array.\n", target); 
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }
}