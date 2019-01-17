#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int h,k;
    cin>>n>>h>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int sum=0,t=0,tmp=0;
    for(int i=0;i<n;i++)
    {
        t+=arr[i];
        if(i<n-1&&t+arr[i+1]<=h)
            continue;
        if(t>h)
        {
            t=arr[i];
            sum++;
           // continue;
        }
        sum+=(t/k);
        t=t%k;
    }
    sum+=(t/k);
    t=t%k;
    if(t>0)
        sum++;
    cout<<sum<<endl;
    return 0;
}