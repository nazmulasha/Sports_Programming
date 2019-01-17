#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,k;
    cin>>n>>k;
    int a=0;
    string str,str2;
    cin>>str;
    sort(str.begin(),str.end());
    //cout<<str<<endl;
    string ans="";
    ans+=str[0];
    char last=str[0];
    for(int i=1;i<n;i++)
    {
        if(ans.size()==k)
            break;
        if(str[i]!=last&&(last-'a')+1<str[i]-'a')
        {
            //cout<<"baal"<<endl;
            ans+=str[i],last=str[i];
        }

    }
    if(ans.size()<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<k;i++)
        a+=(ans[i]-'a')+1;
    cout<<a<<endl;

    return 0;
}