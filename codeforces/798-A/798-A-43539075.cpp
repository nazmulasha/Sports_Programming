#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int cnt=0,p=1;
    for(int i=0,m=n-1;i<n/2;i++,m--)
    {
        if(s[i]!=s[m])
        {
            cnt++;
        }
    }
    if(cnt==1&&n%2==0)
        cout<<"YES"<<endl;
    else if(cnt<=1&&n%2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}