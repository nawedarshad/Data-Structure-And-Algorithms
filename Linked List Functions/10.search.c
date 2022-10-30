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
int search(int n){
    int c=0;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        c++;
        if (temp->data == n)
        {
            return c;
        }
        temp = temp->next;
    }
    return -1;
}
int main()
{
    create(5);
    traverse();
    int j = search(3);
    if (j==-1)
    {
        printf("Not Found");
    }
    else{
        printf("Found at %d",j);
    }
}