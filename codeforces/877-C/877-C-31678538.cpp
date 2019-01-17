#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    if(n==2)
        cout<<3<<endl<<"2 1 2"<<endl;
    else
	{
		vector<int>v;
		for(int i=2;i<=n;i+=2)
			v.push_back(i);
		for(int i=1;i<=n;i+=2)
			v.push_back(i);
		for(int i=2;i<=n;i+=2)
			v.push_back(i);
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}

}