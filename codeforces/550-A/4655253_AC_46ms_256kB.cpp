#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    bool ss=false,st=false;
    int m=0,n=0;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A')
        {
            if(ss==true)
                continue;
            if(str[i+1]=='B')
                {
                    ss=true;
                    m++;
                    i++;
                    continue;
                }
        }
        if(ss==false)
                continue;
        if(str[i]=='B')
        {

            if(str[i+1]=='A')
                {
                    st=true;
                    i++;
                    n++;
                }
        }
    }
    if(st==false||ss==false){
            ss=false;st=false;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='B')
        {
            if(ss==true)
                continue;
            if(str[i+1]=='A')
                {
                    ss=true;
                    m++;
                    i++;
                    continue;
                }
        }
        if(ss==false)
            continue;
       if(str[i]=='A')
        {
            if(st==true)
                continue;
            if(str[i+1]=='B')
                {
                    st=true;
                    i++;
                    n++;
                }
        }
    }
    }

    if(st==true&&ss==true)
    {
        cout<<"YES"<<endl;
    }

   // else if(m>1||n>1)
       // cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
