#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int x=n-i;
        if(x%i==0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}