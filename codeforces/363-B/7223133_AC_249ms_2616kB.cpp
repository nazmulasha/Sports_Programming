#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int in=0;
    long long int mn=999999999999999,sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    mn=sum;
    for(int i=1;i+k-1<n;i++)
    {
        sum+=arr[i+k-1];
        sum-=arr[i-1];
        if(sum<mn)
        {
            mn=sum;
            in=i;
        }
    }
    cout<<in+1<<endl;
    return 0;
}
