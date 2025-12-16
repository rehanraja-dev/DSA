#include<stdio.h>
int main(){
    int array[] = {15,10,30,20,12,5};
    int temp;
    int maxSize = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<maxSize-1; i++){
        for (int j = 0; j < maxSize-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d,",array[i]);
    }
    
}