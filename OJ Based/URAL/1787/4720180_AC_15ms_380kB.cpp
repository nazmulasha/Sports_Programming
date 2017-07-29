#include <iostream>

using namespace std;

int main()
{
    int k,n;
    cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(arr[i]-k);
        if(sum<0)
            sum=0;
    }
    cout<<sum<<endl;
    return 0;
}
