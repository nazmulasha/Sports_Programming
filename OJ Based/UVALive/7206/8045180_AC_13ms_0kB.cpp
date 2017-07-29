#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int ans=0;
        while(m--)
        {
            int b,p;
            cin>>b;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                 int x;
                 cin>>x;
                 if(i==0)
                    p=x;
                 sum+=x;
            }
            int tt=sum-p;
            if(sum-p>b)
                continue;
            else if(sum>b)
                p=0;
            int mx=0;
            int tmp=1;
            for(int i=0;i<5;i++)
            {
                if(tt+tmp<=b)
                    mx=tmp;
                else
                    break;
                tmp*=10;
            }
          //  cout<<mx<<" "<<p<<endl;
            ans+=mx-p;

        }
        cout<<ans<<endl;

    }
    return 0;
}

