#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>mm;
    while(n--)
    {
        string str;
        cin>>str;
        if(mm[str]>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        mm[str]++;
    }
    return 0;
}