#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool st=true;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]>94)
        {
            st=false;
            break;
        }
    }
    if(st)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>94)
                str[i]-=32;
            else
                str[i]+=32;
        }
    }
    cout<<str<<endl;
    return 0;
}
