#include <stdio.h>
#define max_size 6
#define inf 999

int a[] = {10, 88, 77, 5, 24, 13};

void mergeall(int p, int q, int r)
{
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1];
    int R[n2 + 1];

    for(i=0; i<n1; i++)
        L[i] = a[p + i];

    for(j=0; j<n2; j++)
        R[j] = a[q + j + 1];

    L[n1] = inf;
    R[n2] = inf;

    i = j = 0;
    for(k = p; k <= r; k++)
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }


void merge_sort(int p, int r)
{
    if(p < r)
    {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        mergeall(p, q, r);
    }
}

int main()
{
    int i;
    printf("Before Sort : ");
    for(i=0; i<max_size; i++)
        printf("%d ",a[i]);

    merge_sort(0, max_size-1);

    printf("\nAfter Sort : ");
    for(i=0; i<max_size; i++)
        printf("%d ",a[i]);

    return 0;
}
