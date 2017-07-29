#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++){
    string str,str2;
    int bd,by,ed,ey;
    char c;
    cin>>str>>bd>>c>>by>>str2>>ed>>c>>ey;
    if(str!="January"&&str!="February")
        by++;

    if(str2=="January")
        ey--;
    else if(str2=="February")
    {
        if(ed<29)
            ey--;
    }
    int sum=0;
    sum+=((ey/4)-(by-1)/4);
    sum-=((ey/100)-(by-1)/100);
    sum+=((ey/400)-(by-1)/400);
    cout<<"Case "<<t<<": "<<sum<<endl;
    }
    return 0;
}
