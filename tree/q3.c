#include <stdio.h>

#define MAX 15
#define EMPTY -1  

int tree[MAX];

void initTree() {
    for (int i = 0; i < MAX; i++)
        tree[i] = EMPTY;
}

void insertAt(int index, int value) {
    if (index >= MAX) {
        printf("Index out of range!\n");
        return;
    }

    int parent = (index - 1) / 2;
    if (index != 0 && tree[parent] == EMPTY) {
        printf("Invalid insertion! Parent at index %d does not exist.\n", parent);
        return;
    }

    tree[index] = value;
    printf("Inserted %d at index %d\n", value, index);
}

void display() {
    printf("\nTree Array:\n");
    for (int i = 0; i < MAX; i++) {
        if (tree[i] == EMPTY)
            printf("_ ");
        else
            printf("%d ", tree[i]);
    }
    printf("\n");
}

int main() {
    initTree();

    insertAt(0, 10);
    insertAt(2, 20);  
    insertAt(5, 30);  
    insertAt(11, 40); 

    display();
    return 0;
}
