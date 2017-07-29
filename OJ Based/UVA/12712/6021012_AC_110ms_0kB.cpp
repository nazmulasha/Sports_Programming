#include <iostream>

using namespace std;

#define mod 10000000000007
int main()
{
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++)
    {
        int rc,mn,mx;
        cin>>rc>>mn>>mx;
        long long int rr=rc*rc,sum=1;
        for(long long int i=rr-mn+1;i<=rr;i++)
        {
            sum*=i;
            sum%=mod;
        }
        sum%=mod;
       // cout<<sum<<endl;
       // long long int tmp=rr-mx+1;
        long long int prv=sum;
        for(long long int i=rr-mn;i>rr-mx;i--)
        {
             prv*=i;
            prv%=mod;
            sum+=prv;
            sum%=mod;


        }
        cout<<"Case "<<t+1<<": "<<sum<<endl;
    }
    return 0;
}
