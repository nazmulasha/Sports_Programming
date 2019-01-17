#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    string str;
    bool ss=false;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>str>>x>>y;
        if(x>=2400)
        {
            if(y>x)
                ss=true;
        }
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}