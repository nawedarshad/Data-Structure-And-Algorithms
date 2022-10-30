#include <stdio.h>
int display(int a[],int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
}
int delete(int a[],int index,int *Plength,int length){

    for (int i = index+1; i <= length; i++)
    {
        a[i-1] = a[i];
    }
    *Plength -=1;
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    delete(a,3,&length,length);
    display(a,length);
}