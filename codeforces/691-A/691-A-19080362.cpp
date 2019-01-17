#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,c=0;
    bool ss=true,s=true;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(!x)
            c++;
    }
    if(c>1)
        s=false;
    else if(n==1&&c==1)
        s=false;
    else if(n>1&&c==0)
        s=false;
    if(s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}