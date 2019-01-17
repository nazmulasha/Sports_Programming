#include <bits/stdc++.h>

using namespace std;
int n,k,d;

int main()
{
    int n,k;
    cin>>n>>k;
    int ans=k,ans2;
    if(k==1)
    {
        if(n>1)
            cout<<n<<endl;
        else
            cout<<-1<<endl;
        return 0;
    }
    vector<int>v;
    while(n||k>0)
    {
        bool ss=false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ss=true;
                if(k==2)
                {
                    v.push_back(i);
                    v.push_back(n/i);
                    n=0;
                    k=0;
                }
                else
                {
                  //  cout<<i<<" ";
                    v.push_back(i);
                    n/=i;
                    k--;
                }
                break;
            }

        }
        if(!ss){
                v.push_back(n);
                break;
            }

    }
    //cout<<endl;
    if(v.size()!=ans)
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
    return 0;
}