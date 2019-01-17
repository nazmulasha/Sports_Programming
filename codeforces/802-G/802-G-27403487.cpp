//with the name of almighty ALLAH
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool ss=true;
    string s="heidi";
    int k=-1;
    for(int i=0;i<s.size();i++)
    {
        bool qw=false;

        for(int j=k+1;j<str.size();j++)
        {
            if(str[j]==s[i])
            {
                qw=true;
                k=j;
                break;
            }
        }
        if(!qw)
        {
            ss=false;
            break;
        }
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}