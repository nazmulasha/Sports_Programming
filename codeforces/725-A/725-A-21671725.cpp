#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n;
    int ans=0;
    string str;
    cin>>str;
    bool ss=false;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='<')
        {
            if(ss)
            {
                ans++;
            }
            else
            {
                ss=true;
                ans++;
            }

        }
        else
            break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]=='>')
        {
            if(ss)
            {
                ans++;
            }
            else
            {
                ans++;
                ss=true;
            }
        }
        else
            break;
    }

    cout<<ans<<endl;

    return 0;
}