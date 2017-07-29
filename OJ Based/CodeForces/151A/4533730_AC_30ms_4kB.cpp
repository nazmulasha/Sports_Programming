#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int fi=drink/nl;
    int salt=p/np;
    int lime=c*d;
    int r=min(fi,salt);
    int r2=min(r,lime);
    int result=r2/n;
    cout<<result<<endl;
    return 0;
}
