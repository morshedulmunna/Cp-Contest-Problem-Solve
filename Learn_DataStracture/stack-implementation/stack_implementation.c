#include <stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added item: %d\n", x);
    }
    else
    {
        printf("Exception! No Space\n");
    }
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top = top - 1;

        return val;
    }
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    return -1;
}

int main()
{
    push(23);
    push(245);
    push(574);
    printf("pop Item: %d\n", pop());
    push(45);
    printf("top of item from peek: %d\n", peek());

    return 0;
}
