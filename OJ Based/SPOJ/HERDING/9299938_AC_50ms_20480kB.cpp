#include <iostream>

using namespace std;
char arr[1005][1005];
int tmp[1005][1005];
int m,n,cnt;

int work(int i,int j)
{
    if(tmp[i][j]!=-1)
        return tmp[i][j];
    if(arr[i][j]=='E')
    {
        tmp[i][j]=cnt;
        return tmp[i][j]=work(i,j+1);
    }
    else if(arr[i][j]=='W')
    {
        tmp[i][j]=cnt;
        return tmp[i][j]=work(i,j-1);
    }
    else if(arr[i][j]=='N')
    {
        tmp[i][j]=cnt;
        return tmp[i][j]=work(i-1,j);
    }

    else if(arr[i][j]=='S')
    {
        tmp[i][j]=cnt;
        return tmp[i][j]=work(i+1,j);
    }

}

int main()
{
    int m,n;
    cin>>n>>m;
    for(int i=0;i<1005;i++)
    {
        for(int j=0;j<1005;j++)
        {
            arr[i][j]='$';
            tmp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cnt=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(tmp[i][j]==-1)
            {
                int aw;
                tmp[i][j]=cnt;
                if(arr[i][j]=='E')
                    aw=work(i,j+1);
                else if(arr[i][j]=='W')
                    aw=work(i,j-1);
                else if(arr[i][j]=='N')
                    aw=work(i-1,j);
                else if(arr[i][j]=='S')
                    aw=work(i+1,j);
                if(aw==cnt)
                    ans++;
                cnt++;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
