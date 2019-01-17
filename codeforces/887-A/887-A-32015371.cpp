#include <bits/stdc++.h>

using namespace std;
#define mod 131071

int main()
{
    string str;
    cin>>str;
   // reverse(str.begin(),str.end());
    bool ss=false,on=false;
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1')
        {
            on=true;
        }
        else if(on)
            cnt++;
    }
    if(cnt>=6)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}