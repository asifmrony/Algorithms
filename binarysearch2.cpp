#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int BS(int v,int siz)
{
    int l,h,mid;
    l=0,h=siz-1;
    while(l<=h){
        mid=(l+h)/2;
    if(a[mid]==v)
        return 1;
    else if(a[mid]<v)
        l=mid+1;
    else
        h=mid-1;
    }
    return 0;

}
int main(){

    int n,i,res,value;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        }
    sort (a,a+n);
    cin>> value;
    res=BS( value, n);
    if(res==1)
        cout<<"yes";
    else
        cout<<"no";
}
