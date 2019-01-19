#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        int tmp=i;
        bool ss=true;
        for(int j=2;j<=sqrt(tmp);j++)
        {
            if(tmp%j==0)
            {
                ss=false;
                break;
            }
        }
        if(ss==true)
        {
            if(tmp==m)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
