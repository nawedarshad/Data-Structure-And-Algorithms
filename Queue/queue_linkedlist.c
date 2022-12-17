#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;
void enqueue(int x)
{
    struct node *q = (struct node *)malloc(sizeof(struct node));
    q->data = x;
    q->next = 0;
    if (front == 0 &&rear == 0)
    {
        front = rear = q;
    }
    else
    {
        rear->next = q;
        rear = q;
    }
}
void dequeue()
{
    int x;
    x = front->data;
    front = front->next;
}
void display()
{
    struct node *temp;
    temp=front;
    while (front!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(90);
    enqueue(42);
    dequeue();
    dequeue();
    display();
}