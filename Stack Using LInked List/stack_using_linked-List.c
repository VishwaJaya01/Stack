#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* root) {
    return (root == NULL);
}

void push(struct Node** root, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *root;
    *root = newNode;
    printf("%d pushed to stack.\n", data);
}

int pop(struct Node** root) {
    if (isEmpty(*root)) {
        printf("Stack is empty.\n");
        return -1;
    }
    struct Node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int peek(struct Node* root) {
    if (isEmpty(root)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return root->data;
}

void display(struct Node* root) {
    if (isEmpty(root)) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = root;
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    display(root);

    printf("Top element: %d\n", peek(root));

    printf("%d popped from stack.\n", pop(&root));

    display(root);

    return 0;
}