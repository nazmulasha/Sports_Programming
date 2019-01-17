#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int ss=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>90)
            ss++;
    }
    int ss2=str.size()-ss;
    if(ss>=ss2)
        {
            for(int i=0;i<str.size();i++)
            {
                if(str[i]<92)
                    str[i]=str[i]+32;
            }
        }
    else
    {
        for(int i=0;i<str.size();i++)
            {
                if(str[i]>92)
                    str[i]=str[i]-32;
            }


    }
    cout<<str<<endl;
    return 0;
}