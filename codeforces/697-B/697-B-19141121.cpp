#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s1="",s2="",s3="",s4="",s5="";
    bool s=true,sq=true;
    int p;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='.')
        {
            s3+=str[i];
            p=i;
            sq=false;
            continue;
        }

        if(str[i]=='e')
           {
               s=false;
                continue;
           }
        if(s)
        {
            s1+=str[i];
            s3+=str[i];
            if(sq)
                s4+=str[i];
            else
                s5+=str[i];
        }
        else
            s2+=str[i];

    }
   // cout<<p<<endl;
    int xx,o,w;
    o=atoi(s4.c_str());
    w=atoi(s5.c_str());
    xx=atoi(s2.c_str());
    double d=atof(s3.c_str());
    if(xx==0)
    {
        if(d){
            if(w)
               cout<<s3<<endl;
               else
                cout<<s4<<endl;
        }

        else
            cout<<d<<endl;
        return 0;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(i<p)
            cout<<s1[i];
        else
        {
            if(xx==0)
            {
                if(!s){
                cout<<'.';
                s=true;
                }
                cout<<s1[i];
            }
            else
            {
                cout<<s1[i];
                xx--;
            }
        }
    }
    while(xx--)
        cout<<"0";
    cout<<endl;
    return 0;
}