#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;
void create(int n){
    struct node *temp,*newnode;
    int h1;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter 1 element : ");
    scanf("%d",&h1);
    head->data = h1;
    head->next = NULL;
    temp = head;
    for (int i = 2; i < n; i++)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter %d Element : ",i);
    scanf("%d",&h1);
    newnode->data = h1;
    newnode->next = NULL;
     
    temp->next = newnode;
    temp = temp->next;
    }
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
        printf("\n");
}
void insert_end(int n){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    newnode->data = n;
    newnode->next = NULL;
    temp->next = newnode;
}
int main()
{
    create(5);
    traverse();
    insert_end(10);
    traverse();
}