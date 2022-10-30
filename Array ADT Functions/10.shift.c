#include <stdio.h>
#include<stdlib.h>
int display(int a[],int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
    printf("\n");
}
int shift_left(int a[],int length){
    int t = a[length-1];
    for (int i = length-1; i >= 0; i--)
    {
        a[i] = a[i-1];   
    }
    a[0] = t;
}
int shift_right(int a[],int length){
    int t = a[0];
    for (int i = 0; i < length; i++)
    {
        a[i] = a[i+1];   
    }
    a[length-1] = t;
}

int main(){
    int a[10] = {1,2,3,4,5,6,7};
    int length = 7;
    shift_left(a,length);    
    display(a,length);
    shift_right(a,length);    
    display(a,length);
}