#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            cout<<n-i<<" ";
        }
        else
        {
            int tmp=k-1;
            cout<<i-tmp<<" ";
        }

    }
    cout<<endl;

    return 0;
}
