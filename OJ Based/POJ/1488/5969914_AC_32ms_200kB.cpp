#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    char c;
    bool st=true;
    //int i=0;
    while(scanf("%c",&c)!=EOF)
    {
       if(c=='"')
       {
           if(st)
               cout<<"``";
           else
               cout<<"''";

        st=!st;
       }
       else
        cout<<c;
    }
    return 0;
}
