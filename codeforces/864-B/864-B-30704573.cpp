#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            arr[i]=-1;
        else
            arr[i]=str[i]-'a';
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        bool ar[27];
        memset(ar,0,sizeof(ar));
        int tmp=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==-1)
                break;
            if(ar[arr[j]]==false)
                tmp++;
            ar[arr[j]]=true;
        }
        ans=max(tmp,ans);
    }
    cout<<ans<<endl;

    return 0;
}