#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int sum=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            bool ss=true;
            if(str[i]=='-')
            {
                if(i<str.size()-2)
                {
                    if(str[i+1]=='B')
                    {
                        ss=false;
                    }
                    if(str[i+2]=='B')
                    {
                        ss=false;
                    }
                }
                if(i<str.size()-1)
                {
                    if(str[i+1]=='B')
                    {
                        ss=false;
                    }
                    if(str[i+1]=='S')
                    {
                        ss=false;
                    }
                }
                if(i>0)
                {
                    if(str[i-1]=='S')
                        ss=false;
                }
                if(ss==true)
                sum++;
            }

        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
    return 0;
}
