#include <iostream>
#include <map>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    string str;
    cin>>n>>str;
    long long int x=0,y=0;
    bool a=true,b=true;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
        {
            a=false;
            continue;
        }
        if(str[i]==')')
        {
            a=true;
            continue;
        }

        if(a)
        {
            long long int t=0;
            for(i;i<n;i++)
            {
                if(str[i]=='_')
                    break;
                if(str[i]=='(')
                {
                    a=false;
                    break;
                }
                t++;
            }
            //i--;
            x=max(x,t);
        }
        else
        {
            b=false;
            long long int t=0;
            for(i;i<n;i++)
            {
                if(str[i]==')')
                {
                    a=true;
                    if(b)
                        t++;
                    break;
                }
                if(str[i]!='_')
                    b=true;
                if(b&&str[i]=='_')
                {
                    b=false;
                    t++;
                }
            }
            y+=t;
            //i--;
        }

    }
    cout<<x<<" "<<y<<endl;
    return 0;
}