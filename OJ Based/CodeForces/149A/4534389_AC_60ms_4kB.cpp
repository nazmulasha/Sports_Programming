#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[12];
    cin>>n;
    for(int i=0;i<12;i++)
        cin>>arr[i];
    sort(arr,arr+12);
    int sum=0;
    int count=0;
    int i=11;
    while(sum<n)
    {
        sum+=arr[i];
        count++;
        if(i==0)
            break;
        i--;

    }
    if(sum<n)
        cout<<"-1"<<endl;
    else
    cout<<count<<endl;
    return 0;
}
