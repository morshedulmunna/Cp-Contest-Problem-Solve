#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

int ourQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;


bool isFull()
{
    if(totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;

}

void enqueue(int item)
{
    if(isFull())
    {
        printf("sorry! The Queue is full.\n");
    }
    rear = (rear + 1)% CAPACITY;
    ourQueue[rear] = item;
    totalItem++;

}

int dequeue()
{
    if(isEmpty())
    {
        printf("sorry Queue is Empty!\n");
    }
    int frontItem = ourQueue[front];
    ourQueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;


    return frontItem;
}

void printQueue()
{
    printf("Queue: ");
    for(int i=0; i<CAPACITY; i++)
    {
        printf("%d ", ourQueue[i]);
    }
    printf("\n");
}



int main ()
{


    enqueue(23);
    enqueue(43);
    enqueue(53);
    enqueue(33);
    enqueue(63);
    dequeue();
    enqueue(83);
    printQueue();
    return 0 ;
}
