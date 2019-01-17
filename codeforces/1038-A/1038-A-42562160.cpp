/*
I love her !
She is my everything !
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n,k;
    cin>>n>>k>>str;
    int ans=9999999999;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
        arr[str[i]-'A']++;
    for(int i=0;i<k;i++)
        ans=min(ans,arr[i]);
    cout<<ans*k<<endl;

    return 0;
}