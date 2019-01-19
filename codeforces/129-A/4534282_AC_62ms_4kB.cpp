#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(sum%2==arr[i]%2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
