#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int sum=0,arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]>0)
                    sum++;
                if(i+1==n)
                    sum+=arr[i][j];
            }
        }
       // cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0)
                {
                    sum+=arr[i][j];
                    if(j==0)
                    {
                        sum+=arr[i][j];
                    }
                    if(j+1==m)
                    {
                        sum+=arr[i][j];
                    }

                    if(j!=0)
                    {
                        sum+=(max(arr[i][j],arr[i][j-1])-min(arr[i][j],arr[i][j-1]));
                    }
                }
                else
                {
                    if(j==0)
                    {
                        sum+=arr[i][j];
                        sum+=(max(arr[i][j],arr[i-1][j])-min(arr[i][j],arr[i-1][j]));
                    }
                    if(j+1==m)
                    {
                        sum+=arr[i][j];
                    }
                    if(j!=0)
                    {
                        sum+=(max(arr[i][j],arr[i][j-1])-min(arr[i][j],arr[i][j-1]));
                        sum+=(max(arr[i][j],arr[i-1][j])-min(arr[i][j],arr[i-1][j]));
                    }

                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
