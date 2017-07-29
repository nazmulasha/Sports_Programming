#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        long long int sum=1;
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i;
                sum+=(n/i);
            }
        }
        long long int tmp=sqrt(n);
        if(n==tmp*tmp)
            sum+=tmp;
        cout<<sum<<endl;
    }
    return 0;
}
