#include <bits/stdc++.h>

using namespace std;

int work(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        int coin;
        cin>>coin;
        arr[coin]+=1;
    }
    int ans=0;
    for(int i=0;i<1001;i++)
        ans=max(ans,arr[i]);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[1001];
    for(int i=0;i<1001;i++)
        arr[i]=0;

    cout<<work(n,arr)<<endl;


    return 0;
}