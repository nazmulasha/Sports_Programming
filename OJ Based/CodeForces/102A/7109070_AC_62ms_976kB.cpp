#include <iostream>

using namespace std;
#define mx 999999999999999
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ss[1000][1000]={false};
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        ss[x][y]=true;
        ss[y][x]=true;
    }
    long long int sum=mx;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ss[i][j]&&ss[i][k]&&ss[j][k])
                {
                    if(arr[i]+arr[j]+arr[k]<sum)
                        sum=arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    if(sum==mx)
        cout<<-1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
