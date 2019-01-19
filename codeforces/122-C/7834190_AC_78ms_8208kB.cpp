#include <bits/stdc++.h>

using namespace std;
#define MX 1e18
vector <long long int> v;

void gen(long long int x)
{
    if(x>MX)
        return;
    v.push_back(x);
    long long int y=x*10;
    gen(y+4);
    gen(y+7);
}
int main()
{
    gen(0);
    sort(v.begin(),v.end());
    long long int a,b,c;
    cin>>a>>b;
    long long int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=a&&v[i]<b)
        {
            c=v[i]-a+1;
            sum+=c*v[i];
            a=v[i]+1;
        }
        else if(v[i]>=b&&a<=b)
        {
            c=b-a+1;
            sum+=c*v[i];
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
