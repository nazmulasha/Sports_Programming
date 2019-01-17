#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n,A=0,B,AL=0,BO=0;
	cin>>n;
	int arr[n];
	B=n-1;
	long long int sta=0,stb=0,ti=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	while(A<=B)
	{
		if(A==B)
		{
			if(sta<=stb)
				AL++;
			else
				BO++;
			break;
		}
		arr[A]--;
		arr[B]--;
		ti++;
		if(arr[A]==0)
		{
			AL++;
			A++;
			sta=ti;
		}
		
		if(arr[B]==0)
		{
			BO++, B--;
			stb=ti;
		}
	}
	
	cout<<AL<<" "<<BO<<endl;
	
	return 0;
}