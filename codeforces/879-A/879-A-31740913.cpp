#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int ans;
    int s,d;
    cin>>s>>d;
    ans=s;
    for(int i=1;i<n;i++)
    {
        cin>>s>>d;
        while(s<=ans)
            s+=d;
        ans=s;
    }
    cout<<ans<<endl;

}