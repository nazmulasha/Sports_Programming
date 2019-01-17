#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    vector<long long int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
        v.push_back(arr[i]-1);
        v.push_back(arr[i]+1);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++)
    {
        long long int tmp=v[i];
        //cout<<"Main="<<v[i]<<endl;
        for(int j=0;j<n;j++)
        {
            //cout<<arr[i]<<" "<<arr[j]<<endl;

            if(arr[j]==tmp)
            {
                if(arr[j]%2==0)
                    arr[j]--;
                else
                    arr[j]++;
            }
           // cout<<arr[j]<<" ";
        }
        //cout<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}