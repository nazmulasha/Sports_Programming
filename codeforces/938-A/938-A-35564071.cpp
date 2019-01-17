#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str,ans="";
    cin>>str;
    bool ss=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            if(ss==false)
                ans+=str[i],ss=true;
        }
        else{
            ans+=str[i];
            ss=false;
        }
    }
    cout<<ans<<endl;
    return 0;
}