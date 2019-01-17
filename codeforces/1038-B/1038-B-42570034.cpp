/*
I love her !
She is my everything !
*/

#include <bits/stdc++.h>

using namespace std;
long long int gcd(long long int a,long long int b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    int n;
    cin>>n;
    if(n<3)
        cout<<"No"<<endl;
    else
    {
        if(n%2==0)
        {
            cout<<"Yes"<<endl;
            cout<<n/2;
            for(int i=1;i<=n;i+=2)
                cout<<" "<<i;
            cout<<endl;
            cout<<n/2;
            for(int i=2;i<=n;i+=2)
                cout<<" "<<i;
            cout<<endl;
        }
        else
        {
            if((n/2)%2==1)
            {
                cout<<"Yes"<<endl;
                cout<<2<<" 1 3"<<endl;
                cout<<n-2;
                for(int i=2;i<=n;i++)
                {
                    if(i==3)
                        continue;
                    cout<<" "<<i;
                }
                cout<<endl;
            }
            else
            {
                long long int sum=0,b=2;
                for(int i=1;i<=n;i++)
                    sum+=i;

                for(b=2;;b++)
                {
                    if(gcd(b,sum-b)>1)
                        break;
                }
                cout<<"Yes"<<endl;
                cout<<1<<" "<<b<<endl;
                cout<<n-1;
                for(int i=1;i<=n;i++)
                {
                    if(i==b)
                        continue;
                    cout<<" "<<i;
                }
                cout<<endl;
            }

        }
    }

    return 0;
}