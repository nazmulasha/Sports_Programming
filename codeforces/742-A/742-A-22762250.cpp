#include <bits/stdc++.h>

using namespace std;
long long int phi(long long int n)
{
    long long int ans=n;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            ans-=ans/i;
        while(n%i==0)
            n/=i;
    }
    if(n>1)
        ans-=(ans/n);
    return ans;
}
int lastDigit(int n, int p) {


    int x= pow(n%10,(p-1)%4+1);
    return x%10;
}

int last2(int base, int e){
    int result=1,m=10;
    while(e>0){
        if (e&1==1){
           result=(result*base)%m;
        }
        e=e>>1;
        base=(base*base)%m;
    }
    return result%10;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<lastDigit(1378,n)<<endl;
    return 0;
}