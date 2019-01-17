/*************************************************
**********Bismillahir Rahmanir Rahim**************
*************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map <string,int> m;
    int n;
    string ss,st;
    cin>>ss>>st>>n;
    string a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    cout<<ss<<" "<<st<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ss)
        {
            ss=b[i];
        }
        else
            st=b[i];
        cout<<ss<<" "<<st<<endl;
    }
    return 0;
}