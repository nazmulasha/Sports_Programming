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

    string str;
    cin>>str;
    int sum=0;
    char c='a';
    for(int i=0;i<str.size();i++)
    {
        int x,y;
        if(str[i]>c)
        {
            x=str[i]-c;
            y=(c+26)-str[i];
            sum+=min(x,y);
        }
        else if(str[i]<c)
        {
            x=c-str[i];
            y=(str[i]+26)-c;
            sum+=min(x,y);
        }
        c=str[i];
        //cout<<x<<" "<<y<<" "<<c<<endl;

    }
    cout<<sum<<endl;
    return 0;
}