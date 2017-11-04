#include <stdio.h>

#define max_size 50000

//int a[] = {7,5,1,8,4};
int a[max_size];

void dog()
{
    int i, j, key;
    for(j=1; j<max_size;j++)
    {
        key = a[j];
        i = j-1;
        while(i>-1 && a[i] > key)
        {
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }
}

int main()
{
    int k;
    for(int i=0, k = 50000; i<max_size; i++, k--)
    {
        //printf("\nEnter %d Number : ",(i+1));
        //scanf("%d",&a[i]);
        a[i] = k;
    }
    printf("Before Sort : ");
    for(int i=0; i<max_size; i++)
        printf("%d ",a[i]);

    dog();

    printf("\nAfter Sort : ");
    for(int i=0; i<max_size; i++)
        printf("%d ",a[i]);
    return 0;
}
