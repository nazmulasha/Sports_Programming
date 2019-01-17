#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <math.h>
#include <map>
using namespace std;

int main()
{

    int m,n;
    cin>>n>>m;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    int arr[m];
    map<int,int>mm;
    vector <string> v;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        mm[arr[i]]=1;
        v.push_back(str[arr[i]-1]);
    }
    string ans=str[arr[0]-1];
     sort(v.begin(),v.end());
    if(v[0].size()!=v[m-1].size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=1;i<m;i++)
    {
        string s=str[arr[i]-1];
        for(int j=0;j<s.size();j++)
        {
                if(s[j]!=ans[j])
                    ans[j]='?';
        }
    }
    bool ss=true;
    int si=v[0].size(),cn=0;
    if(ss){
        vector <string> vv;
    for(int i=1;i<=n;i++)
    {
        if(mm[i]==0)
        {
            if(str[i-1].size()==si){
                cn++;
                vv.push_back(str[i-1]);
            }
        }
    }
    if(cn>0){
        bool ps=false;
     for(int i=0;i<cn;i++)
     {
         ps=true;
         for(int j=0;j<ans.size();j++)
         {
             if(!ps)
                break;
             if(ans[j]!='?')
             {
                 if(ans[j]==vv[i][j])
                 {
                     ps=true;
                 }
                 else
                    ps=false;
             }
             else
                ps=true;
         }
    if(ps)
        break;

     }
     if(ps==true)
        ss=false;
    }
    }

    if(ss)
    {
        cout<<"Yes"<<endl<<ans<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}