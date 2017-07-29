#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,ans;
    while(cin>>n>>m){
    if(m>=n)
        ans=(n*(n+1)*(3*m-n+1))/6;
    else
        ans=(m*(m+1)*(3*n-m+1))/6;

    cout<<ans<<endl;
    }
}
