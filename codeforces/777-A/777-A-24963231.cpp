#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x;
    cin>>n>>x;
    n%=6;
    int ans=0;
    bool ss=false;
    int arr[3];
    for(ans;ans<2;ans++)
    {
        memset(arr,0,sizeof arr);
        arr[ans]=1;
        for(int i=1;i<=n;i++)
        {

            if(i%2==1)
            {
                swap(arr[0],arr[1]);
            }
            else
                swap(arr[1],arr[2]);
        }
        if(arr[x])
            break;
    }
    cout<<ans<<endl;

    return 0;
}