#include <bits/stdc++.h>

using namespace std;
int rd(string str,int p)
{
    int cnt=0;
    for(int i=p;i<str.size();i++)
    {
        if(str[i]=='a')
            cnt++;
    }
    return cnt;
}
int nd(string str)
{
    int dp[50001],dp3[50001];
    memset(dp,0,sizeof(dp));
    memset(dp3,0,sizeof(dp3));
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a')
            dp[i]++;
        if(i>0)
            dp[i]+=dp[i-1];
    }
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='a')
            dp3[i]++;
        if(i!=str.size()-1)
            dp3[i]+=dp3[i+1];
    }
   // int cnt=max(rd(str,0),dp[str.size()-1]);
    int cnt=dp3[0];
    int tmp=0;
    int lastb=-1;
   // cout<<cnt<<endl;
    for(int i=0;i<str.size();i++)
    {
        tmp=0;
        for(int j=i;j<str.size();j++)
        {
            if(str[j]=='b')
                tmp++;
            if(j!=str.size())
                cnt=max(cnt,dp[i]+tmp+dp3[j+1]);
            else
                cnt=max(cnt,dp[i]+tmp);

        }
        //cout<<i<<" "<<tmp<<" "<<cnt<<endl;
    }
    return cnt;
}
int main()
{
    string str;
    cin>>str;
    cout<<nd(str)<<endl;

}