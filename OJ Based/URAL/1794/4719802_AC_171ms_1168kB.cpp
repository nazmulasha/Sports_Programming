#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++)
        arr2[i]=0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        tmp=(i+1)-arr[i];
        if(tmp<0)
          tmp+=n;
        arr2[tmp]++;
    }
    int xm=-1,p;
    for(int i=0;i<n;i++)
    {
        if(arr2[i]>xm)
        {
            xm=arr2[i];
            p=i+1;
        }
    }
    cout<<p<<endl;
    return 0;
}
