#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(!m[str])
        {
            cout<<"OK"<<endl;
            m[str]++;
        }
        else
        {
            cout<<str<<m[str]<<endl;
            m[str]++;
        }
    }
    return 0;
}
