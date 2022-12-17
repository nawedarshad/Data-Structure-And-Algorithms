#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *q;
};
void enqueue(struct queue *qu,int x){
    if (qu->rear == qu->size-1)
    {
        printf("\nQueue Overflow");
    }
    else{
        qu->rear++;
        qu->q[qu->rear] = x;
    }
}
int dequeue(struct queue *qu){
    int x;
    if (qu->rear == qu->front)
    {
        printf("\nQueue Underflow");
    }
    else{
        qu->front++;
        x=qu->q[qu->front];
         return x;
    }
}
void print(struct queue qu){
    for (int i = qu.front+1; i <= qu.rear; i++)
    {
        printf("%d  ",qu.q[i]);
    } 
        printf("\n");
}
int main(){
    struct queue qu;
    printf("Enter Size : ");
    scanf("%d",&qu.size);
    qu.q = (int*)malloc(qu.size*sizeof(int));
    qu.front = qu.rear = -1;
    enqueue(&qu,16);
    enqueue(&qu,45);
    enqueue(&qu,94);
    enqueue(&qu,63);
    enqueue(&qu,48);
    print(qu);
    dequeue(&qu);
    dequeue(&qu);
    print(qu);
}
