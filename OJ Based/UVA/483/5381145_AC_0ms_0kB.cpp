#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        string ss="";
        for(int i=0;i<str.size();i++)
        {

            if(str[i]==' ')
            {
                reverse(ss.begin(),ss.end());
                cout<<ss<<" ";
                ss="";
                continue;
            }
            ss+=str[i];
        }

        reverse(ss.begin(),ss.end());
        cout<<ss<<endl;
    }
    return 0;
}
