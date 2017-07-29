#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ans=0;
        for(long long int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){
                if(i%2==0){
                  ans++;
                }
                long long int tmp=n/i;
                  if(tmp%2==0&&tmp!=i)
                    ans++;
            }
        }
        if(n%2==0)
            ans++;
        cout<<ans<<endl;
    }
}
