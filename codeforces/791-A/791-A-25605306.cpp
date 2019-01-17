#include <bits/stdc++.h>

using namespace std;

void inp()
{
    #ifdef nazmulasha
    freopen("in.txt","r",stdin);
    #endif //nazmulasha
}
int main()
{
    long long int n,a;
    cin>>n>>a;
    int ans=0;
    for(ans;;ans++)
    {
        if(n>a)
            break;
        n*=3;
        a*=2;

    }
    cout<<ans<<endl;

    return 0;
}