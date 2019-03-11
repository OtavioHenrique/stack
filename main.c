#include <stdio.h>
#include "stack.h"

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
