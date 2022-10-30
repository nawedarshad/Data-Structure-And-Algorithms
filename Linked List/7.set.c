#include <stdio.h>
int display(int a[],int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
}
int set(int a[],int index,int n){
    a[index] = n;
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    set(a,3,564);
    display(a,length);
}