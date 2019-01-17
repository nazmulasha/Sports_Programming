#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str;
    int arr[26];
    memset(arr,0,sizeof(arr));
    cin>>str;
    for(int i=0;i<str.size();i++)
        arr[str[i]-'A']++;

    bool ss=false;
    int cnt=0;
    int guard[26];
    memset(guard,0,sizeof(guard));
    for(int i=0;i<str.size();i++)
    {
        int in=str[i]-'A';
        if(guard[in]==0)
        {
            cnt++;
            guard[in]=1;
            if(cnt>k)
            {
                ss=true;
                break;
            }
        }
        arr[in]--;
        if(arr[in]==0)
        {
            cnt--;
            guard[in]=0;
        }

    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}