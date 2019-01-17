#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<str.size();i++)
        arr[str[i]-'a']++;
    bool ss=true;
    for(int i=0;i<26;i++)
    {
        //cout<<i<<" "<<arr[i]<<endl;
        if(arr[i]>k)
        {
            ss=false;
            break;
        }
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}