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
void traverse(){
    struct node *temp;
    int i = 0;
    if (head == NULL)
    {
        printf("Empty.");
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        i++;
        printf("\n%d Element : %d",i,temp->data);
        temp = temp->next;
    } 
        i++;
        printf("\n%d Element : %d",i,temp->data);
        printf("\n\n");
    while (temp->prev != NULL)
    {
        i++;
        printf("\n%d Element : %d",i,temp->data);
        temp = temp->prev;
    } 
        printf("\n%d Element : %d",i,temp->data);


}
int main()
{
    create(5);
    traverse();
}