#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    long long int a[n],b[n],s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        s1+=a[i];
        s2+=b[i];
    }
    int mx=abs(s1-s2);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int tmp,temp;
        tmp=s1-a[i];
        temp=s2-b[i];
        tmp+=b[i];
        temp+=a[i];
        if(abs(tmp-temp)>mx)
        {
            ans=i+1;
            mx=abs(tmp-temp);
            //cout<<tmp<<" "<<temp<<" "<<mx<<endl;
        }

    }
    if(ans==-1)
        ans=0;
    cout<<ans<<endl;
    return 0;
}