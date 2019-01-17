#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d[7];
    memset(d,0,sizeof(d));
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='1')
            {
                d[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<7;i++)
        ans=max(ans,d[i]);
    cout<<ans<<endl;
    return 0;
}