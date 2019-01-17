#include <bits/stdc++.h>

using namespace std;
int n;
bool cm(int** arr,int** dp)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=dp[i][j])
                return false;
        }
    }
    return true;
}

int** rot(int** arr)
{
    int** tmp;
    tmp = new int*[n];
    for(int i = 0; i < n; i++)
        tmp[i] = new int[n];
    for(int j=0;j<n;j++)
    {
        int k=0;
        for(int i=n-1;i>=0;i--)
        {
            tmp[j][k]=arr[i][j];
            k++;
        }
    }
    return tmp;
}

int** flipV(int** arr)
{
    int** tmp;
    tmp = new int*[n];
    for(int i = 0; i < n; i++)
        tmp[i] = new int[n];
    int k=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            tmp[k][j]=arr[i][j];
        }
        k++;
    }
   return tmp;
}

int** flipH(int** arr)
{
    int** tmp;
    tmp = new int*[n];
    for(int i = 0; i < n; i++)
        tmp[i] = new int[n];

    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=n-1;j>=0;j--)
        {
            tmp[i][k]=arr[i][j];
            k++;
        }

    }
   return tmp;
}

void print(int** arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
  //  freopen("in.txt","r",stdin);
    int arr[1001];
    memset(arr,0,sizeof(arr));
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u]++;
        arr[v]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}