#include <bits/stdc++.h>

using namespace std;

long long int mn(long long int x,long long int y)
{
    if(x>y)
        return y;
    else
        return x;
}

int main()
{
    double x,y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"="<<endl;
        return 0;
    }
    double t1=log(x)/x;
    double t2=log(y)/y;
    if(t1>t2)
        cout<<">"<<endl;
    else if(t1<t2)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
    return 0;
}