#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int A[500] , n ;

    cin >> n ;
    for(int i=0;i<n;i++) cin >>A[i];

    for(int i=0;i<n;i++)
    {
        int j = i-1 ;
        int key = A[i];
        while(j!=-1&&A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key ;
    }
    for(int i=0;i<n;i++) cout << A[i] << ' ';
    return 0;
}
