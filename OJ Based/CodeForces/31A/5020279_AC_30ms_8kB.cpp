#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            for(int k=0;k<n;k++)
            {
                if(i==k||k==j)
                continue;
                if(arr[i]==arr[j]+arr[k])
            {
                cout<<i+1<<" "<<k+1<<" "<<j+1<<endl;
                return 0;
            }
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
