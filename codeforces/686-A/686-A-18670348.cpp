#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    long long int n,x,d=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        char c;
        long long int a;
        cin>>c>>a;
        if(c=='+')
            x+=a;
        else
        {
            if(a>x)
                d++;
            else
                x-=a;

        }
     //   cout<<x<<" "<<d<<endl;
    }
    cout<<x<<" "<<d<<endl;
    return 0;
}