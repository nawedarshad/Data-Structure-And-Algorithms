#include <stdio.h>
int display(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d  ", a[i]);
    }
}
int sort(int a[], int length){
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    display(a, length);
}
int merge(int a[], int b[],int alength, int blength)
{
    int i, j, c[10];
    int k = 0;
    for (i = 0; i < alength; i++)
    {
        c[k] = a[i];
        k++;
    }
    for ( j = 0; j < blength; j++)
    {
        c[k] = b[j];
        k++;
    }
    int clength = sizeof(c)/sizeof(int);
    sort(c,clength);
    
}
int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};
    int alength = sizeof(a) / sizeof(int);
    int blength = sizeof(b) / sizeof(int);
    merge(a, b, alength, blength);
    return 0;
}
