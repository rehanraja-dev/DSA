#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int n = sizeof(a)/sizeof(a[0]);
    int lb = 0, ub = n-1;
    int found = 0;
    while (lb <= ub)
    {
        int mid = (lb + ub)/2;
        if(a[mid] == key){
            found = 1;
            break;
        }
        else if(a[mid] > key){
            ub = mid - 1;
        }
        else{
            lb = mid + 1;
        }
    }
    if(found){
        printf("Element %d found in the array",key);
    }
    
}