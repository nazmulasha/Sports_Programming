#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int tmp,mi,mx,ans=0;
    cin>>tmp;
    n--;
    mi=tmp;
    mx=tmp;
    while(n--)
    {
        cin>>tmp;
        if(tmp>mx)
        {
            ans++;
            mx=tmp;
        }
        else if(tmp<mi)
        {
            ans++;
            mi=tmp;
        }
    }
    cout<<ans<<endl;
    return 0;
}
