# Stack Implementation in C

This repository contains implementations of a stack data structure in C, with two different implementations: one using arrays and the other using linked lists.

## Stack Data Structure

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. In a stack, elements are added and removed from the top of the stack. It supports two primary operations:

- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes and returns the top element from the stack.

Additionally, stacks often support other operations such as:
- **Peek**: Returns the top element without removing it.
- **isEmpty**: Checks if the stack is empty.
- **isFull** (for array-based implementations): Checks if the stack is full.

## Implementations

### 1. Stack using Arrays

The `stack_array.c` file contains the implementation of a stack using arrays. In this implementation, a fixed-size array is used to store the stack elements. The size of the array determines the maximum capacity of the stack.

#### Usage:
```c
#include "stack_array.h"

int main() {
    // Example usage of stack using arrays
    StackArray stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));

    pop(&stack);
    printf("Top element after pop: %d\n", peek(&stack));

    return 0;
}
```
### 1. Stack using Linked Lists

The stack_linkedlist.c file contains the implementation of a stack using linked lists. In this implementation, dynamic memory allocation is used to create nodes, allowing the stack to grow dynamically without a fixed maximum capacity.

#### Usage:
```c
#include "stack_linkedlist.h"

int main() {
    // Example usage of stack using linked lists
    StackNode *stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));

    pop(&stack);
    printf("Top element after pop: %d\n", peek(&stack));

    return 0;
}
```

### Contribution

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.


