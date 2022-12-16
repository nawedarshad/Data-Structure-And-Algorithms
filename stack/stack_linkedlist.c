#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} top = NULL;

void push(int x)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (top == NULL)
    {
        t->next = NULL;
    }
    else
    {
        t->next = top;
    }
    t->data = x
}
int main()
{
}