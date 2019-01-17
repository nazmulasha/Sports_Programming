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
    cin>>n;
    int** arr;
    int** dp;
    arr = new int*[n];
    for(int i = 0; i < n; i++)
        arr[i] = new int[n];
    dp= new int*[n];
    for(int i = 0; i < n; i++)
        dp[i] = new int[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c=='X')
                arr[i][j]=1;
            else
                arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c=='X')
                dp[i][j]=1;
            else
                dp[i][j]=0;
        }
    }
    if(cm(arr,dp)||cm(flipH(arr),dp)||cm(flipV(arr),dp)||cm(rot(flipH(arr)),dp)||cm(rot(flipV(arr)),dp)||cm(rot(rot(flipH(arr))),dp)||cm(rot(rot(flipV(arr))),dp)||cm(rot(rot(rot(flipH(arr)))),dp)||cm(rot(rot(rot(flipV(arr)))),dp)||cm(rot(arr),dp)||cm(rot(rot(arr)),dp)||cm(rot(rot(rot(arr))),dp))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}