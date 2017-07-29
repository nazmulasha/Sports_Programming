#include <bits/stdc++.h>

using namespace std;
#define mx 10000
long long int arr[mx];

void work()
{
    arr[2]=0;
    arr[1]=1;

    memset(arr,0,sizeof(arr));
    for(int i=2;i<=sqrt(mx);i++)
    {
        if(arr[i]!=0)
            continue;
        for(int j=i+i;j<=mx;j+=i)
        {

            arr[j]=1;
        }

    }

}
long long int sumofd(long long int x)
{
    stringstream ss;
    ss<<x;
    string str=ss.str();
    long long int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=(str[i]-'0');
    }
    return sum;
}
int main()
{

    work();
    int t;
    cin>>t;
    arr[1]=1;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ans=0;
        for(int i=a;i<=b;i++)
        {
            long long int tmp=sumofd(i);

            if(tmp%2!=0&&arr[tmp]==0){
                ans++;
               // cout<<i<<" "<<tmp<<endl;
            }
            if(tmp==2)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
