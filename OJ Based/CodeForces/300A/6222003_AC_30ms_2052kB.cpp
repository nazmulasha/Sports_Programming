#include <iostream>
#include <math.h>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v1,v2,v3;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
            v1.push_back(x);
        else if(x<0)
            v2.push_back(x);
        else
            v3.push_back(x);
    }
    if(v2.size()%2==0)
    {
        v3.push_back(v2.back());
        v2.pop_back();
    }
    if(v1.size()==0)
    {
        v1.push_back(v2.back());
        v2.pop_back();
        v1.push_back(v2.back());
        v2.pop_back();

    }
        cout<<v2.size()<<" ";
    for(int j=0;j<v2.size()-1;j++)
        cout<<v2[j]<<" ";
    cout<<v2[v2.size()-1]<<endl;

        cout<<v1.size()<<" ";
    for(int i=0;i<v1.size()-1;i++)
        cout<<v1[i]<<" ";
    cout<<v1[v1.size()-1]<<endl;
        cout<<v3.size()<<" ";
    for(int k=0;k<v3.size()-1;k++)
        cout<<v3[k]<<" ";
    cout<<v3[v3.size()-1]<<endl;

}
