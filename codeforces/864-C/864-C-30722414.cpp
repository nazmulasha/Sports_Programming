#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,f,k,tmps;
    cin>>a>>b>>f>>k;
    tmps=b;
  //  a=a*k*2;
    long long int ans=0;
    vector<long long int>v;
    v.push_back(f);
    bool ss=true;
    for(int i=0;i<k;i++)
    {
        if(ss){
            ss=false;
            if(i==k-1)
                v.push_back(a-f);
            else
                v.push_back(2*(a-f));
        }
        else
        {
            ss=true;
            if(i==k-1)
                v.push_back(f);
            else
                v.push_back(2*f);
        }

    }
    ss=true;
    for(int i=0;i<v.size()-1;i++)
    {
        if(b<v[i])
        {
            //cout<<b<<" "<<v[i]<<endl;
            ss=false;
            break;
        }
        else
            b-=v[i];
        if(b<v[i+1])
        {
           // cout<<v[i+1]<<" "<<b<<endl;
            b=tmps;
            ans++;
        }
    }
    if(b<v[v.size()-1])
        ss=false;

    if(ss)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
    return 0;
}