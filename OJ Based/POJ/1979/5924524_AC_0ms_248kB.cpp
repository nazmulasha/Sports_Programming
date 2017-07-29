#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;

char str[20][20];
void dfs(int x,int y,int w,int h)
{
	if(str[x][y]=='.')
        str[x][y]='0';
    if(str[x+1][y]=='.'&&x+1<h)
        dfs(x+1,y,w,h);
	if(str[x-1][y]=='.'&&x-1>=0)
	    dfs(x-1,y,w,h);
	if(str[x][y+1]=='.'&&y+1<w)
	    dfs(x,y+1,w,h);
	if(str[x][y-1]=='.'&&y-1>=0)
	    dfs(x,y-1,w,h);
}

int main()
{
	int w,h;
	while(cin>>w>>h)
	{
		if(w==0&&h==0)
            break;
        int x,y;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin>>str[i][j];
				if(str[i][j]=='@')
				{
					x=i;
					y=j;
				}
			}
		}
		str[x][y]='0';
		dfs(x,y,w,h);
		int sum=0;
	    for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(str[i][j]=='0')
                    sum++;
            }
        }
		cout<<sum<<endl;
	}
	return 0;
}
