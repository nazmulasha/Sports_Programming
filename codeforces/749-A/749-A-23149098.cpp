#include <bits/stdc++.h>

using namespace std;
#define max 1000009
#define max2 900001
int flag[max];
long long int arr[max];
#define on(x) (flag[x/64]&(1<<((x%64)/2)))
#define mark(x) flag[x/64] |=(1<<((x%64)/2))
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        {
            if(i+1==n/2)
                cout<<2<<endl;
            else
                cout<<2<<" ";
        }

    }
    else
    {
        if(n==3)
            cout<<1<<endl<<3<<endl;
        else
        {
            long long int tmp=n-3,t=(tmp/2)+1;
            cout<<t<<endl;
            for(int i=1;i<t;i++)
                cout<<2<<" ";
            cout<<3<<endl;
        }
    }
    return 0;
}