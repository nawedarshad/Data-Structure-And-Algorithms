#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top = 0;
void push(int x)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = top;
    top=t;
}
void pop()
{
    int x;
    x=top->data;
    top = top->next;
}
void display(){
    struct node *temp;
    temp = top;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    push(23);
    push(85);
    push(81);
    pop();
    display();
}