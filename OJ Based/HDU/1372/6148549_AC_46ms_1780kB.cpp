#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int dx[8]={-2,-2,2,2,-1,1,-1,1 };
int dy[8]={-1,1,-1,1,-2,-2,2,2 };
int dist[8][8],vis[8][8],x,y,d,xx,yy;


void bfs (int x,int y)
{
	memset(vis,0,sizeof(vis));
	memset(dist,0,sizeof(dist));
	int front=0,back=0;
	queue<pair<int,int> >q;
	pair <int,int>p(x,y);
	q.push (p);
	dist[x][y]=0;
	vis[x][y] = 1;
	while (!q.empty())
        {
            p=q.front();
            q.pop();
            x=p.first;
            y=p.second;
            for(int i=0;i<8;i++)
            {
                int xxx=x+dx[i];
                int yyy=y+dy[i];
                if(xxx>=0&&xxx<8)
                {
                    if(yyy>=0&&yyy<8)
                    {
                        if(!vis[xxx][yyy])
                        {
                            q.push(make_pair(xxx,yyy));
                            vis[xxx][yyy]=1;
                            dist[xxx][yyy]=dist[x][y]+1;
                            if(!(xxx^xx)&!(yyy^yy))
                                return;
                        }
                    }
                }
            }
		}
}

int main()
{
    string str,str2;
    while(cin>>str>>str2)
    {
        xx=str2[0]-'a';
		yy=str2[1]-'1';
		int t1=str[0]-'a',t2=str[1]-'1';
		bfs(t1,t2);
		cout<<"To get from "<<str<<" to "<<str2<<" takes "<<dist[xx][yy]<<" knight moves."<<endl;
    }
    return 0;
}

