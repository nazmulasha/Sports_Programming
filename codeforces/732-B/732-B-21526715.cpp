#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]+arr[i-1]<k){
            sum+=k-(arr[i]+arr[i-1]);
            arr[i]+=k-(arr[i]+arr[i-1]);
            }
    }
   // cout<<arr[n-1];
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}