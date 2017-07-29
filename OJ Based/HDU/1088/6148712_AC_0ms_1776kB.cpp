#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,ss="";
    while(cin>>str)
    {
        if(str=="")
            continue;
        if(str=="<br>")
        {
            if(!ss.empty())
                cout<<ss;
            cout<<endl;
            ss="";
        }
        else if(str=="<hr>")
        {
            if(!ss.empty())
                cout<<ss<<endl;
            ss="";
            for(int i=0;i<80;i++)
                cout<<"-";
            cout<<endl;
        }
        else
        {
            string temp=ss+" "+str;
            if(temp.size()<80)
            {
                if(ss.empty())
                    ss=str;
                else
                    ss+=" "+str;
            }
            else
            {
                cout<<ss<<endl;
                ss=str;
            }

        }

    }
    if(!ss.empty())
        cout<<ss<<endl;
    return 0;
}
