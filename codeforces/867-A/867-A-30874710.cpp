#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    cin>>n>>str;
    int s=0,f=0;
    bool ss=false;
    if(str[0]=='S')
        ss=true;
    for(int i=1;i<n;i++)
    {
        if(str[i]=='F'&&ss==true)
        {
            ss=false;
            f++;
        }
        else if(str[i]=='S'&&ss==false)
        {
            ss=true;
            s++;
        }
    }
    if(f>s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}