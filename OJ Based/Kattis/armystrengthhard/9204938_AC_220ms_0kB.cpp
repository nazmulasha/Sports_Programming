#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int arn[n],arm[m];
        for(int i=0;i<n;i++)
            cin>>arn[i];
        for(int i=0;i<m;i++)
            cin>>arm[i];
        if(m==0&&n==0)
            cout<<"uncertain"<<endl;
        sort(arn,arn+n);
        sort(arm,arm+m);
        int i=0,j=0;
        while(1)
        {
            if(i==n||j==m)
                break;
            if(arn[i]<arm[j])
                i++;
            else
                j++;
        }
        if(j==m)
            cout<<"Godzilla"<<endl;
        else
            cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
