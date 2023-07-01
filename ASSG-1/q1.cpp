#include<iostream>
#include<algorithm>
#include <map>
using namespace std;

int_fast16_t second_approach(int *arr,int n,int target)
{
    map<int,int>m1;
    for(int i=0;i<n;i++){
        if(!m1[target-arr[i]]) m1[target-arr[i]]++;
        if(m1[arr[i]]) return 1;
    }
    return 0;
}

int main()
{
    int n=5,target=6;
    int arr[5]={6,4,3,2,1},flag=0;
    //first approach O(nlogn+n/2)
    sort(arr,arr+n); // this will take nlogn
    int l=0,h=n-1;
    while(l<h){ // O(n/2)
        if(arr[l]+arr[h]==target){
            cout<<arr[l]<<" "<<arr[h]<<endl;
            flag=1;
            break;
        }
        else if(arr[l]+arr[h]<=target)l++;
        else h--;
    }
    (flag)?cout<<"Target present"<<endl:cout<<"sorry";

    //second approach using hashmap
    
    if(second_approach(arr,n,10)) cout<<"!hurray"<<endl;
 

}
