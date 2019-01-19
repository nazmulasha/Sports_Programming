#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int f=0,s=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='4')
            f++;
        else if(str[i]=='7')
            s++;
    }
    if(s==0&&f==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(f<s)
        cout<<"7"<<endl;
    else
        cout<<"4"<<endl;

    return 0;
}