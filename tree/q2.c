#include <stdio.h>

#define MAX 100

int tree[MAX];    
int lastIndex = -1; 

void insert(int value) {
    if (lastIndex == MAX - 1) {
        printf("Tree is full!\n");
        return;
    }

    lastIndex++;
    tree[lastIndex] = value;
}

void display() {
    if (lastIndex == -1) {
        printf("Tree is empty!\n");
        return;
    }

    printf("Binary Tree (Array form):\n");
    for (int i = 0; i <= lastIndex; i++) {
        printf("%d ", tree[i]);
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    display();

    return 0;
}