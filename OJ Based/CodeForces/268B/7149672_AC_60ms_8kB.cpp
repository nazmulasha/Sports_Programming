#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n;
    long long int ans=0;
    cin>>n;
    ans=(n*(n-1)*(n+1))/6;
    ans+=n;
    cout<<ans<<endl;
    return 0;
}
