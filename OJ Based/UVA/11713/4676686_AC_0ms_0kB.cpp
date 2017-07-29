#include <iostream>
#include <string>
using namespace std;

bool chech(char c)
{
    if(c=='a')
        return true;
    else if(c=='e')
        return true;
    else if(c=='i')
        return true;
    else if(c=='o')
        return true;
    else if(c=='u')
        return true;
    else
        return false;
}

int main()
{
    string str,str2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        bool ss;
        cin>>str>>str2;
        if(str.size()!=str2.size())
            ss=false;
        else
        {
            ss=true;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]!=str2[i])
                {
                    if(!chech(str[i]))
                        ss=false;
                }
            }
        }
        if(ss==true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
