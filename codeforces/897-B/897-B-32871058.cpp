#include <bits/stdc++.h>

using namespace std;

#define MAX 18

char str[MAX];

void makepal(int sz, int odd)
{
	int j,i=sz-1,k=odd?sz-1:sz,carry=1,a;
	for(;i>=0||carry;i--,k++)
	{
		a=(i>=0)?str[i]-'0':0;
		str[k]=(a + carry) % 10 + '0';
		carry=(a + carry)/10;
	}
	str[k]=0;
	for(i=0,j=k-1;i<j;i++,j--)
        str[i] = str[j];
}

int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int ans=11;
    sprintf(str,"%ld",ans);
    ans%=m;
	int t, sz, odd, mid, i, j, flag;
	n--;
	while(n>0)
	{
		sz = strlen(str);
		mid = (sz + 1) / 2;
		odd = (sz & 1) ? 1 : 0;
		i = mid-1, j = mid, flag = 0;
		for(i=odd?i-1:i; i>=0 && j<sz; i--, j++)
		{
			if(str[i] > str[j])
            {
                str[j] = str[i];
                flag = 1;
            }
			else if(str[i]==str[j])
                str[j] = str[i];
			else
                break;
		}
		if(! flag)
            makepal(mid, odd);

		if(strlen(str)%2==0)
        {
            long long int tmp=atoll(str);
            tmp%=m;
            ans+=tmp;
            ans%=m;
            n--;
        }
	}
	ans%=m;
	cout<<ans<<endl;
	return 0;
}