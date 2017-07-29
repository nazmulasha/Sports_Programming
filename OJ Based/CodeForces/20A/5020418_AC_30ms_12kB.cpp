#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    bool s=false,sw=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='/')
        {
            sw=true;
            if(s==true)
                cout<<"/";
            cout<<str[i];
            s=false;
        }
        if(str[i]=='/')
            s=true;
    }
    if(sw==false)
        cout<<"/";
    cout<<endl;
    return 0;
}
