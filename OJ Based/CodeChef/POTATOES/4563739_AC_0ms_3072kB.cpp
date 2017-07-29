#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        int tmp=1;
        while(!prime(sum+tmp))
            tmp++;
        cout<<tmp<<endl;

    }
    return 0;
}
