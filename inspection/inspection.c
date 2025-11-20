#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    // float f1;
    char c;
    // char c1;
    // char c2;
    // char c3;
    // char c4;
    // char c5;
    // char c6;
    // char c7;
    // char c8;
    // char c9;
    // char c10;
    // char c11;
};
int main(){
struct node n1;
int *p;
printf("%lu \n",sizeof(n1.data));
printf("%lu\n",sizeof(n1.link));
// printf("%lu\n",sizeof(n1.f1));
printf("%lu",sizeof(n1.c));

printf("\n%lu", sizeof(struct node));
// printf("\n%lu", sizeof(p));

}