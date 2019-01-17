#include <iostream>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    string ss;
    cin>>ss;
    int si=ss.size();
    int cnt=0,cn=0,ans;
    //sort(str,str+n);
    for(int i=0;i<n;i++)
    {
        if(str[i].size()<si)
            cnt++;
        if(str[i].size()<=si)
            cn++;
    }
    cnt++;
    //cout<<cnt<<endl;
    ans=cnt+((cnt/k)*5);
    if(cnt%k==0)
        ans-=5;
    cout<<ans<<" ";
    cnt=cn+((cn/k)*5);
    if(cn%k==0)
        cnt-=5;
    cout<<cnt<<endl;
    return 0;
}