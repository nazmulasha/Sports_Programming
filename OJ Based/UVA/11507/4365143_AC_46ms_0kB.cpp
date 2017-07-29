#include <iostream>
#include <string>
using namespace std;

void rev(bool &s)
{
    if(s==true)
        s=false;
    else
        s=true;
}

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        string tmp="x";
        bool st=false;
        for(int i=1;i<n;i++)
        {
            string str;
            cin>>str;
            if(str[0]=='N')
                continue;
            if(tmp[0]=='x'&&str[0]=='-')
                rev(st);
            else if(tmp[0]=='y'&&str[0]=='+'&&str[1]=='y')
                rev(st);
            else if(tmp[0]=='z'&&str[0]=='+'&&str[1]=='z')
                rev(st);

            if(tmp[0]=='x')
                tmp[0]=str[1];
            else if(tmp[0]==str[1])
                tmp[0]='x';
        

        }
        if(st==false)
            cout<<"+"<<tmp[0]<<endl;
        else
            cout<<"-"<<tmp[0]<<endl;

        cin>>n;
    }
    return 0;
}
