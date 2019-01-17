#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int x=-1;
    string str;
    cin>>str;
    int xx=0,yy=0;
    if(str[0]=='R')
        x=1,xx++;
    else
        x=0,yy++;

    for(int i=1;i<str.size();i++)
    {
        if(str[i]=='R')
            xx++;
        else
            yy++;
        int curr;
        if(xx>yy)
            curr=1;
        else if(xx<yy)
            curr=0;
        else
            curr=x;
        if(curr!=x)
            ans++,x=curr;
    }
    cout<<ans<<endl;

    return 0;
}