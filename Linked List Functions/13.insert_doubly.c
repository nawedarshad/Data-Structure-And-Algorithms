#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*head;
void create(int n){
    struct node *temp,*current;
    int h1;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter 1 Element : ");
    scanf("%d",&h1);
    head->data = h1;
    head->prev = NULL;
    temp = head;
    // prev = head;
    for (int i = 2; i <= n; i++)
    {
        current = (struct node*)malloc(sizeof(struct node));
        printf("Enter %d Element : ",i);
        scanf("%d",&h1);
        temp->next = current;
        current->prev = temp;
        current->data = h1;
        temp=temp->next;
    }
    temp->next = NULL; 
}
void insert(int n){
    struct node *temp,*h1;
    temp = (struct node*)malloc(sizeof(struct node));
    h1 = head;
    temp->next = h1;
    temp->data = n;
    h1->prev = temp;
    temp->prev = NULL;
    head = temp;
}
void traverse(){
    struct node *temp;
    int i = 0;
    if (head == NULL)
    {
        printf("Empty.");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        i++;
        printf("\n%d Element : %d",i,temp->data);
        temp = temp->next;
    } 
}
int main()
{
    create(5);
    insert(6);
    traverse();
}