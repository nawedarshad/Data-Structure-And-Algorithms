#include <stdio.h>
int *display(int *a,int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
}
int main()
{
    int a[] = {1,2,3,4,5,6,0};
    int length = sizeof(a)/sizeof(int);
    display(a,length);
}

