#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p,q,r,s;
    p=a^b;
    q=c|d;
    r=b&c;
    s=a^d;
   // cout<<p<<q<<r<<s<<endl;
    int x,y;
    x=p&q;
    y=r|s;
    int z=x^y;

    cout<<z<<endl;
    return 0;

}