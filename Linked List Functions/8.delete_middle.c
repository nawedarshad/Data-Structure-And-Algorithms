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
    for (int i = 2; i <= n; i++)
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
void delete_middle(){
    struct node *temp,*q1,*q2;
    q1 = q2 = head;
    int a;
    q2 = q2->next->next;
    while (q2!=NULL)
    {
        temp = q1;
        q1 = q1->next;
        if (q2->next == NULL)
        {
            q2 = q2->next;
        }
        else{
            q2 = q2->next->next;
        }
    }
    a = q1->data;
    temp->next = q1->next;
    free(q1);
    free(q2);
}
int main()
{
    create(5);
    traverse();
    delete_middle();
    traverse();
}