#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int kk=1;
    for(int i=1;i<=k;i++)
        kk*=10;
    k=kk;
   // cout<<n<<" "<<k<<" "<<__gcd(n,k)<<endl;
    long long int ans=(n/__gcd(n,k))*k;
    cout<<ans<<endl;
    return 0;
}
