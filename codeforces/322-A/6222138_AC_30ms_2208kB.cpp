#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool findb(vector <pair<int,int> > v,int n)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first==n)
            return true;
    }
    return false;
}
bool findg(vector <pair<int,int> > v,int n)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second==n)
            return true;
    }
    return false;
}
int main()
{
    int b,g;
    cin>>b>>g;
    vector <pair<int,int> > v;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=g;j++)
        {
            if(findb(v,i)==false||findg(v,j)==false)
            {
                pair<int,int>p;
                p.first=i;
                p.second=j;
                v.push_back(p);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}

