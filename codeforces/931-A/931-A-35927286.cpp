#include <bits/stdc++.h>

using namespace std;

int main()

{
    long long int m,n;
    cin>>m>>n;
    n=labs(m-n);
    long long int mid=n/2;
    long long int ans=0;
    ans=(mid*(mid+1))/2;
    mid=n-mid;
    ans+=(mid*(mid+1))/2;
    cout<<ans<<endl;
    return 0;
}