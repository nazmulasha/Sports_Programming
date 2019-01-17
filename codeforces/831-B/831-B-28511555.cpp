#include <bits/stdc++.h>

using namespace std;
#define mx 10000
int main()
{
    string str,str2,txt;
    cin>>str>>str2>>txt;
    string ans="";
    for(int i=0;i<txt.size();i++)
    {
        if(txt[i]>='0'&&txt[i]<='9')
        {
            //cout<<txt[i]<<endl;
            ans+=txt[i];
            continue;
        }
        int in;
        char c=txt[i];
        c=tolower(c);
       // cout<<c<<endl;
        for(int j=0;j<26;j++)
        {
            if(str[j]==c)
            {
                in=j;
                break;
            }
        }
        //cout<<in<<endl;
        ans+=str2[in];
        if(txt[i]>='A'&&txt[i]<='Z')
        {
            //cout<<ans[ans.size()-1]<<endl;
            ans[i]=toupper(ans[i]);
        }

    }
    cout<<ans<<endl;
    return 0;
}