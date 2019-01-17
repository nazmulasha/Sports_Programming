#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,ans=0;
    cin>>n;
    while(n)
    {
        if(n%8==1)
            ans++;
        n/=8;
    }
    cout<<ans<<endl;

}