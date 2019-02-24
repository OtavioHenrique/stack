#include <stdio.h>

typedef char Item;

typedef struct stack {
    int maxItems;
    int head;
    Item *items;
} *Stack;

Stack createStack(int maxItems) {
    Stack newStack = malloc(sizeof(struct Stack));
    newStack->maxItems = maxItems;
    newStack->head = NULL;
    newStack->items = malloc(sizeof(struct Item) * maxItems);

    return newStack;
}

int main(void) {
    Stack stack = createStack(10);
}
