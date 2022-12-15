#include <stdio.h>
int a[] = {1,3,6,2,4,7,9};
int n=7;
int insertionsort(){
    int x,j;
    for (int i = 1; i < n; i++)
    {
        j = i-1;
        x = a[i];
        while (j>-1 && a[j]>x)
        {
            a[j+1] = a[j];
            j--;
        }
       a[j+1] = x; 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }  
}
int main(){
  insertionsort();
  
}