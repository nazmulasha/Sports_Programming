#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    bool st=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            st=true;
            break;
        }
    }
    if(st==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
