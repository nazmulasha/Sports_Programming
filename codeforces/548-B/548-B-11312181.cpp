#include <iostream>

using namespace std;

int main()
{
    int i,j,m;
    cin>>i>>j>>m;
    int grid[i][j];
    for(int x=0;x<i;x++)
    {
        for(int y=0;y<j;y++)
            cin>>grid[x][y];
    }
    for(int n=0;n<m;n++)
    {
        int sum=0;
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(grid[x][y]==0)
            grid[x][y]=1;
        else if(grid[x][y]==1)
            grid[x][y]=0;

        for(int a=0;a<i;a++)
        {
            int temp=0;
            for(int b=0;b<j;b++)
            {
                if(grid[a][b]==0)
                temp=0;
                temp=temp+grid[a][b];
                if(temp>sum)
                sum=temp;
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}