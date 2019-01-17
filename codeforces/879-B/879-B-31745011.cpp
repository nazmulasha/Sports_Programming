#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int n,k;
    cin>>n>>k;
    queue<long long int>q;
    long long int mx=0;
    for(int i=0;i<n;i++)
    {
        long long int p;
        cin>>p;
        q.push(p);
        if(p>mx)
            mx=p;
    }
    if(k>=n)
    {
        cout<<mx<<endl;
        return 0;
    }
    long long int p=q.front(),cnt=0,pre=-1;
    q.pop();
    while(1)
    {
        long long int an=q.front();
        q.pop();
        if(p>an)
        {
            if(pre==p)
                cnt++;
            else
            {
                cnt=1;
                pre=p;
            }
            q.push(an);
        }
        else
        {
            if(pre==an)
                cnt++;
            else
            {
                pre=an;
                cnt=1;
            }
            q.push(p);
            p=an;
        }
        if(cnt==k)
        {
            cout<<p<<endl;
            return 0;
        }
    }

}