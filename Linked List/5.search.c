#include <stdio.h>
int display(int a[],int length,int index){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
    if (index==-1)
    {
        printf("\nNot Found");
    }
    else{
    printf("\nFound at %d",index);
    }
}
int search(int a[],int n,int length){

    for (int i = 0; i < length; i++)
    {
        if (a[i] == n)
        {
           return i;
        } 
    }
    return -1;
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    int n = search(a,3,length);
    display(a,length,n);
}