#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,xt=1;
    while(cin>>n)
    {
        if(n<0)
            break;
        vector<pair<long long int,long long int> >v;
        pair<long long int,long long int> p;
        for(int i=0;i<n;i++)
        {
            long long int x,y;
            cin>>x>>y;
            p.first=x;
            p.second=y;
            v.push_back(p);
        }
       // sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int cnt=1;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if(v[i].first>=v[j].first&&v[i].first<=v[j].second)
                    cnt++;
            }
            if(cnt>sum)
                sum=cnt;
        }
        cout<<"Case "<<xt<<": "<<sum<<endl;
        xt++;
    }
    return 0;
}
