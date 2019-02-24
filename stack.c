#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct stack {
    int maxItems;
    int head;
    Item *items;
} *Stack;

Stack createStack(int maxItems) {
    Stack newStack = malloc(sizeof(Stack));
    newStack->maxItems = maxItems;
    newStack->head = -1;
    newStack->items = malloc(sizeof(Item) * maxItems);

    return newStack;
}

int isEmpty(Stack stack) {
    if(stack->head == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(Stack stack) {
    if(stack->head == stack->maxItems-1) {
        return 1;
    } else {
        return 0;
    }
}

void addItem(Item newItem, Stack stack) {
    if(isFull(stack) == 0) {
        stack->head++;

        stack->items[stack->head] = newItem;
    } else {
        puts("Stack is full!");
    }
}

void destroyStack(Stack *stack) {
    free((*stack)->items);
    free(*stack);
    *stack = NULL;
}

Item stackHead(Stack stack) {
    if(isEmpty(stack) == 1)
        puts("Stack is empty");

    return stack->items[stack->head];
}

Item removeItem(Stack stack) {
    if(isEmpty(stack) == 1)
        puts("Stack is empty!");

    Item removedItem = stack->items[stack->head];
    stack->head--;

    return removedItem;
}

int main(void) {
    Stack stack = createStack(3);

    printf("Is empty: %d\n", isEmpty(stack));
    printf("Is full: %d\n", isFull(stack));

    puts("Adding number");
    addItem(1, stack);
    puts("Adding number");
    addItem(1, stack);
    puts("Adding number");
    addItem(10, stack);

    printf("Is empty: %d\n", isEmpty(stack));
    addItem(1, stack);
    printf("Is full: %d\n", isFull(stack));

    Item removedItem = removeItem(stack);

    printf("Removed Item: %d\n", removedItem);

    printf("Is full: %d\n", isFull(stack));
    printf("Is empty: %d\n", isEmpty(stack));

    puts("Adding number");
    addItem(1, stack);

    puts("Adding number");
    addItem(1, stack);

    printf("Is full: %d\n", isFull(stack));
    printf("Is empty: %d\n", isEmpty(stack));

    return 0;
}
