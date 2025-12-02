#include<stdio.h>

int main(){
    int sortedA[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(sortedA)/sizeof(sortedA[0]);
    int target = 9;
    int left = 0, right = n - 1;
    int found = 0;
    while(left <= right){
        int mid = (left + right) / 2;
        if(sortedA[mid] == target){
            found = 1;
            break;
        }
        else if(sortedA[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
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