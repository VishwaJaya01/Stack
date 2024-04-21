#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int isFull();
int isEmpty();
int peek();
void push(int data);
int pop();
void print();

int stack[MAX];
int top = -1;

int main()
{

    int choice;
    int data;
    while (1)
    {
        printf("Enter your choice:\n1.Push\n2.Pop\n3.Print top element\n4.Print all the elements of the stack\n5.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            if (data != -1)
            {
                printf("Popped element: %d\n", data);
            }
            break;
        case 3:
            printf("The top element is %d", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    }
}

int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        return -1;
    }

    return stack[top--];
}

int peek(){
    if (isEmpty())
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top];
    
}

void print()
{
    if (top == -1)
    {
        printf("Stack empty.\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
