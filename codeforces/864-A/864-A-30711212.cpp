#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[105];
    for(int i=0;i<105;i++)
        arr[i]=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    int ans=0;
    vector<int>v;
    for(int i=0;i<105;i++)
    {
        if(arr[i])
        {
            ans++;
            v.push_back(i);
        }
    }

    if(ans==2&&arr[v[0]]==arr[v[1]])
        cout<<"YES"<<endl<<v[0]<<" "<<v[1]<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}