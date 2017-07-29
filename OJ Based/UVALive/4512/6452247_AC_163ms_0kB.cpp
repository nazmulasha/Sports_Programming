#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        pair<long long int,long long int> p;
        vector<pair<long long int,long long int> >v;
        for(int i=0;i<n;i++)
        {
            long long int a,b,c,d;
            cin>>a>>b>>c>>d;
            p.first=c;
            p.second=c+d;
            v.push_back(p);
        }
        for(int i=0;i<m;i++)
        {
            long long int x,y;
            cin>>x>>y;
            y+=x;
            long long int sum=0;
            for(int j=0;j<v.size();j++)
            {
                if(v[j].second<=x||v[j].first>=y)
                    continue;
                sum++;
            }
            cout<<sum<<endl;
        }
        v.erase(v.begin(),v.end());
    }

    return 0;
}
