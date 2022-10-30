#include <stdio.h>
int display(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}
int reverse(int a[], int length)
{
    int t;
    for (int i = 0, j = length - 1; i < length/2, j >= length/2; i++,j--)
    {
        t = a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
int main()
{
    int a[20] = {1, 2, 3, 4, 5, 6, 7};
    int length = 7;
    reverse (a,length);
    display(a,length);
}