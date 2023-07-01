#include <iostream>

using namespace std;

int main()
{
    int n,target;cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int l=0,h=n-1,mid;
    while(l<h)
    {
        mid=(l+h)/2;
        if(arr[mid]==target) 
        {cout<<mid<<endl;break;
        }
        else if(arr[mid]<target)l+=mid;
        else h-=mid;
    }
}
