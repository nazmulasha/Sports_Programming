#include <bits/stdc++.h>

using namespace std;
#define mx 1000001
bool isprime[mx];

void sieve()
{
    for(int i=0;i<mx;i++)
        isprime[i]=true;
    isprime[1]=false;
    isprime[0]=false;
    int sq=sqrt(mx);
    for(int i=3;i<=sq;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i+i;j<mx;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    for(int j=4;j<mx;j+=2)
        isprime[j]=false;
}
int main()
{
    sieve();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int s;
        cin>>s;
        if(s==4)
        {
            cout<<"YES"<<endl;
            continue;
        }
        long long int sq=sqrt(s);
        if(isprime[sq]&&sq*sq==s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
