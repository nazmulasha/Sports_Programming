#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n*2];
    for(int i=0;i<2*n;i++)
        cin>>arr[i];
    sort(arr,arr+(2*n));
    if(arr[n]>arr[n-1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}