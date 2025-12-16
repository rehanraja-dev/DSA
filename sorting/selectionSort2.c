#include<stdio.h>
int main(){
    int array[] = {15,10,30,20,12,5,2};
    int temp,n=1,x;
    int maxSize = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<maxSize-1; i++){
        for (int j = n; j < maxSize; j++)
        {
            x = i;
            if (array[i]>array[j])
            {
                x = j;
            }
            if (x!=i)
            {
            temp = array[i];
            array[i] = array[x];
            array[x] = temp;
            }
        }
        n = n + 1;
    }
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d,",array[i]);
    }
    
}