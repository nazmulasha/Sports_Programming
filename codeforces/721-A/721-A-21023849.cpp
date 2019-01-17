#include <iostream>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>v;
    int t=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='W')
        {
            if(t>0)
                v.push_back(t);
            t=0;
        }
        if(str[i]=='B')
            t++;
    }
    if(t>0)
        v.push_back(t);
    cout<<v.size()<<endl;
    if(v.size()==0)
        return 0;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}