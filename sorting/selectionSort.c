#include<stdio.h>
int main(){
    int array[] = {15,10,30,20,12,5};
    int temp,n=1;
    int maxSize = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<maxSize-1; i++){
        for (int j = n; j < maxSize; j++)
        {
            if (array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
           
        }
        n = n + 1;
    }
    
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d,",array[i]);
    }
    
}