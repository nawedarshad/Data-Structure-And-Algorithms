#include <stdio.h>
int display(int a[],int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
}
int insert(int a[],int index,int *Plength,int length){

    for (int i = length; i >= index; i--)
    {
        a[i+1] = a[i];
    }
    a[index] = 65;
    *Plength +=1;
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    insert(a,3,&length,length);
    display(a,length);
}