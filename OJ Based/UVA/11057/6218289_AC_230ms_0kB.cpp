#include <iostream>
#include <math.h>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long int p,x,y,z=-1;
        cin>>p;
        sort(arr,arr+n);
        bool ss=false;
        pair<int,int> pp;
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++)
        {

            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==p)
                {
                    int a,b;
                    pp.first=arr[i];
                    pp.second=arr[j];
                    v.push_back(pp);
                    ss=true;
                    break;
                }
            }
        }
        int mn=9999999999;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second-v[i].first<mn)
            {
                mn=v[i].second-v[i].first;
                x=v[i].first;
                y=v[i].second;
            }
        }
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl<<endl;

    }
    return 0;
}
