#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],dp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        dp[i]=arr[i];
    }

    sort(arr,arr+n);
    int sum=0;
    vector<int>v,ans;
    map<int,int>m;
    int tmp=k;
    for(int i=n-1;i>=0;i--)
    {
        v.push_back(arr[i]);
        m[arr[i]]++;
        sum+=arr[i];
        k--;
        if(k==0)
            break;
    }
    int cnt=0,in=0;
    for(int i=0;i<n;i++)
    {
        cnt++;
        if(m[dp[i]]>0)
        {
            m[dp[i]]--;
            if(tmp==1)
                cnt+=(n-i-1);
          //  cout<<i<<" "<<dp[i]<<" "<<cnt<<endl;
            ans.push_back(cnt);
            cnt=0;
            tmp--;
        }
    }
   // ans.push_back(cnt);
    cout<<sum<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}