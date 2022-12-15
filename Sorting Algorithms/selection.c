#include <stdio.h>
int a[] = {1,3,6,2,4,7,9};
int n=7;
void selection(){
    int i,j,k,temp;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = k = i; j < n; j++)
        {
            if (a[j]<a[k])
            {
                k=j;
            } 
        }
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    } 
}
int main(){
  selection();
}