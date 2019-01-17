#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[n];
    int mx=0,cnt=0;
    cin.getline(str,n+1);
    for(int i=0;i<n;i++)
    {
       // scanf("%s",&str[i]);
       // cout<<str[i]<<endl;
        if(str[i]==' ')
        {
            mx=max(mx,cnt);
            cnt=0;
        }
        if(str[i]>='A'&&str[i]<='Z')
        {
            cnt++;
        }
    }
    mx=max(mx,cnt);
    cout<<mx<<endl;
    return 0;
}