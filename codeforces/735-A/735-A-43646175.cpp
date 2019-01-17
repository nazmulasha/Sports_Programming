#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='G')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(str[j]=='T')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                else if(str[j]=='.' && j!=n-1)
                    continue;

                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        if(str[i]=='T')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(str[j]=='G')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                else if(str[j]=='.'&& j!=n-1)
                    continue;
                    
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}