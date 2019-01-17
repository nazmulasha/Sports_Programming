#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int t,s,x;
    cin>>t>>s>>x;
    if(x<t+s)
    {
        if(t==x)
             cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
    else{
    x=x-t;
    if(x%s==0||(x-1)%s==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}