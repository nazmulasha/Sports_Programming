#include <iostream>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    long long int joy=-9999999999;
    for(int i=0;i<n;i++)
    {
        long long int tmp=0;
        if(arr[i][1]>k)
            tmp=arr[i][0]-(arr[i][1]-k);
        else
            tmp=arr[i][0];
        if(tmp>joy)
            joy=tmp;
    }
    cout<<joy<<endl;
    return 0;
}
