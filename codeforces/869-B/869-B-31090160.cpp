#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<1<<endl;
        return 0;
    }
    int ans=(a+1)%10;;
   // cout<<ans<<endl;
    for(long long int i=a+2;i<=b;i++)
    {
       // cout<<i<<endl;
        int tmp=i%10;
        ans*=tmp;
        ans%=10;
        if(ans==0)
            break;
    }
    cout<<ans<<endl;
    return 0;
}