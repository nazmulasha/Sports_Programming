#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t){
    int ans=0;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        if(x==t)
            ans++;
    }
    cout<<ans<<endl;
    }
}
