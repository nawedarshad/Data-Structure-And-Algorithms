#include <stdio.h>
int display(int a[],int length,int max,int min){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    } 
    printf("\nMax = %d",max);
    printf("\nMin = %d",min);
}
int max(int a[],int length){
    int max = a[0];
    for (int i = 0; i < length; i++)
    {
        if (max < a[i])
        {
            max = a[i] ;
        }
    }
    return max;
}
int min(int a[],int length){
    int min = a[0];
    for (int i = 0; i < length; i++)
    {
        if (min > a[i])
        {
            min = a[i] ;
        }
    }
    return min;
}
int main(){
    int a[20] = {1,2,3,4,56,45,78,9};
    int length = 8;
    int m = max(a,length);
    int n = min(a,length);
    display(a,length,m,n);
}