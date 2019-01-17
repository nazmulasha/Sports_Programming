#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        tmp=arr[i]^x;
        if(tmp==arr[i])
        {
            if(m[tmp]>1)
            {
                ans+=(m[tmp]-1);
            }
            m[tmp]--;
            continue;
        }
        if(m[tmp]>0)
        ans+=m[tmp];
        m[arr[i]]--;
    }
   // ans/=2;
    cout<<ans<<endl;

    return 0;
}