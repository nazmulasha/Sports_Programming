#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        int j=i;
        bool ss=true;
        for(int k=0;k<b.size();k++)
        {
            if(j>=a.size())
            {
                ss=false;
                break;
            }
            if(a[j]!=b[k])
            {
                ss=false;
                break;
            }
            j++;
        }
        if(ss)
        {
            a[i+b.size()-1]='*';
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
