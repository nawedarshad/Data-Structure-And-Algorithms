#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
} st;
void create()
{
    printf("Enter size : ");
    scanf("%d", &st.size);
    st.top = -1;
    st.s = (int *)malloc(st.size * sizeof(int));
}
void push(){
    if (st.top == st.size-1)
    {
        printf("\nStack Overflow");
    }
    else{
        printf("Enter Element : ");
        st.top++;
        scanf("%d",&st.s[st.top]);
    }
}
int isEmpty(){
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(){
    if (st.top == st.size-1)
    {
        return 1;
    }
    return 0;
}
void pop(){
    int x;
    if (st.top == -1)
    {
        printf("\nStack Underflow");
    }
    else{
        x=st.s[st.top--];
    }
}
void peek(){
    if (st.top == -1)
    {
        printf("\nStack Empty");
    }
    else{
        printf("Top element is : %d\n",st.s[st.top]);
    }
}
void display(){
    for (int i = st.top; i >= 0; i--)
    {
       printf("%d  ",st.s[i]); 
    } 
}
int main()
{
    create();
    push();
    push();
    push();
    pop();
    peek();
    display();
}