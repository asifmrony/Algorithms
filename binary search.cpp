#include<bits/stdc++.h>
using namespace std;

int arr[]={-11,-8,-2,10,15,20,30,50};

int main(){
    int ele =35, low=0, high=7;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]<ele) low = mid+1;
        else if(arr[mid]>ele) high=mid-1;
        else
        {
            printf("found");
            return 0;
        }
    }
    printf("not found");
    return 0;

}
