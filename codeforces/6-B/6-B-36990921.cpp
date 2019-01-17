#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	char c;
	cin>>n>>m>>c;
	
	char pd[n][m];
	
	int count=0;
	map<char, int>mm;
	mm[c]=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>pd[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
	  for(int j=0; j<m; j++)
		{
			if(pd[i][j]==c)
			{
				if(j>0)
				{
					if(pd[i][j-1]!='.' && mm[pd[i][j-1]]==0)
					{
						count++;
						mm[pd[i][j-1]]=1;
						
					}
				}
				
				if(j+1<m)
				{
					if(pd[i][j+1]!='.' && mm[pd[i][j+1]]==0)
					{
						count++;
						mm[pd[i][j+1]]=1;
						
					}
				}
				
				if(i>0)
				{
					if(pd[i-1][j]!='.' && mm[pd[i-1][j]]==0)
					{
						count++;
						mm[pd[i-1][j]]=1;
						
					}
				}
				
				if(i+1<n)
				{
					if(pd[i+1][j]!='.' && mm[pd[i+1][j]]==0)
					{
						count++;
						mm[pd[i+1][j]]=1;
						
					}
				}
				
			}
		}
	}
	
	cout<<count<<endl;
}