#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin>>n>>str;
    if(n>26)
    {
        cout<<-1<<endl;
        return 0;
    }
    int arr[27];
    int ans=0;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        int key=str[i]-'a';
        arr[key]++;
        if(arr[key]>1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
