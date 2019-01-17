#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/(n/2);
    pair<int,int>p;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
            continue;
        int x=arr[i];
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(arr[j]==-1)
                continue;
            if(arr[j]==avg-x)
            {

                    p.first=i+1;
                    p.second=j+1;
                    v.push_back(p);

                arr[i]=-1;
                arr[j]=-1;
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}