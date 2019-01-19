#include <iostream>
#include <string>
using namespace std;
string dos(string str,int s,int e)
{
    string ss;
    for(int i=s;i<e;i++)
        ss+=str[i];
    return ss;
}
int main()
{
    string str,st,s;
    cin>>s>>st>>str;
    s+=st;
    bool stt=false;
    if(s.size()!=str.size())
        cout<<"NO"<<endl;

    else
    {
       for(int i=0;i<s.size();i++)
       {
           char c=s[i];
           for(int j=0;j<str.size();j++)
           {
               if(c==str[j])
               {
                   str=dos(str,0,j)+dos(str,j+1,str.size());
                   break;
               }
           }
       }
       if(str.size()>0)
        cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;
    }
    return 0;
}
