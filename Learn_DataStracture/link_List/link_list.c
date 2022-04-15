#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;

};

int main()
{
    //structure Variable __
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    //Memory Allocaed___
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    //Add Data Every Node___
    a->data = 10;
    b->data = 20;
    c->data = 30;

    //connect Node___
    a->next = b;
    b->next = c;
    c->next = NULL;

    //Traverse a Link List
    while(a != NULL){
        printf("%d-> ", a->data);
        a = a->next;
    }

    return 0;
}
