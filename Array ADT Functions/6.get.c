#include <stdio.h>
int display(int a[],int length,int n){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
    printf("\nElement = %d",n);
}
int get(int a[],int n){
    return a[n];
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    int n = get(a,3);
    display(a,length,n);
}