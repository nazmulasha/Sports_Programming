#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int sum=0;
    long long int arr[n];
    int in=0;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        if(x%2==0)
            sum+=x;
        else
        {
            arr[in]=x;
            in++;
        }
    }
    int p=0;
    if(in%2!=0)
        p++;
    sort(arr,arr+in);
    for(int i=p;i<in;i++)
        sum+=arr[i];
    cout<<sum<<endl;
    return 0;
}