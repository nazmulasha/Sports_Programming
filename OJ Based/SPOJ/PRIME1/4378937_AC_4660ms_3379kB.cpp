#include <iostream>
#include <math.h>
using namespace std;

bool prime(long long int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int x,y;
        cin>>x>>y;
        for(long long int j=x;j<=y;j++)
        {
            if(j==1)
                continue;
            if(prime(j))
                cout<<j<<endl;
        }
        cout<<endl;
    }
    return 0;
}
