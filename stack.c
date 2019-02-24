#include <stdio.h>
#include <stdlib.h>

typedef char Item;

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

int main(void) {
    Stack stack = createStack(10);

    printf("%d\n", isEmpty(stack));

    printf("%d\n", isFull(stack));

    return 0;
}
