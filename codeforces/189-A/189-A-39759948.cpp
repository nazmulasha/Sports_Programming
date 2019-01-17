#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=37,arr[3]={31,8,5};
    cin>>n>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[0]==1)
    {
        cout<<n<<endl;
        return 0;
    }


    int ans=0;
    for(int i=0;;i++)
    {
        int tmp=n,sum=0;
        int tmp2=n-(arr[0]*i);
        if(tmp2<0)
            break;
        tmp=tmp2;
        sum=i;
        if(tmp==0)
            ans=max(ans,sum);
        int tmp3=tmp;
        for(int j=0;;j++)
        {
            tmp=tmp3;
            tmp2=tmp-(arr[1]*j);
            if(tmp2<0)
                break;
            tmp=tmp2;
            sum+=j;
            if(tmp==0)
                ans=max(ans,i+j);
            else if(tmp%arr[2]==0)
            {
                ans=max(ans,i+j+(tmp/arr[2]));
            }

        }
        if(tmp!=0)
            sum=-1;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}