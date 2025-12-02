#include <stdio.h>

int A[] = {1, 2, 3, 4, 5, 6, 7};
int n = 7;

void inorder(int i) {
    if (i >= n) return;
    inorder(2*i + 1);
    printf("%d ", A[i]);
    inorder(2*i + 2);
}

void preorder(int i) {
    if (i >= n) return;
    printf("%d ", A[i]);
    preorder(2*i + 1);
    preorder(2*i + 2);
}

void postorder(int i) {
    if (i >= n) return;
    postorder(2*i + 1);
    postorder(2*i + 2);
    printf("%d ", A[i]);
}

int main() {
    printf("Inorder: ");
    inorder(0);

    printf("\nPreorder: ");
    preorder(0);

    printf("\nPostorder: ");
    postorder(0);

    return 0;
}
