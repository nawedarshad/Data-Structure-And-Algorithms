#include <stdio.h>
int append(int a[],int *Plength,int length){
    a[length]=14;
    *Plength +=1;
    for (int i = 0; i <= length; i++)
    {
        printf("%d ",a[i]);
    }
}
int main(){
    int a[20] = {1,2,3,4,5,6,7};
    int length = 7;
    append(a,&length,length);
}