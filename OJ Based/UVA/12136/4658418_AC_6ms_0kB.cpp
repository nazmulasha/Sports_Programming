#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++){
    string tmp,tmp2,str,str2;
    int wh,wm,mh,mm,whe,wme,mhe,mme;
    cin>>str>>str2>>tmp>>tmp2;
   // bool ss=false;
    string c,c2;
    c=str[0];
    c2=str[1];
    wh=atoi(c.c_str())*10+atoi(c2.c_str());
    c=str[3];
    c2=str[4];
    wm=atoi(c.c_str())*10+atoi(c2.c_str());
    c=str2[0];
    c2=str2[1];
    whe=atoi(c.c_str())*10+atoi(c2.c_str());
    c=str2[3];
    c2=str2[4];
    wme=atoi(c.c_str())*10+atoi(c2.c_str());
    c=tmp[0];
    c2=tmp[1];
    mh=atoi(c.c_str())*10+atoi(c2.c_str());
    c=tmp[3];
    c2=tmp[4];
    mm=atoi(c.c_str())*10+atoi(c2.c_str());
    c=tmp2[0];
    c2=tmp2[1];
    mhe=atoi(c.c_str())*10+atoi(c2.c_str());
    c=tmp2[3];
    c2=tmp2[4];
    mme=atoi(c.c_str())*10+atoi(c2.c_str());
    //cout<<wh<<endl<<wm<<endl<<whe<<endl<<wme<<endl<<mh<<endl<<mm<<endl<<mhe<<endl<<mme<<endl;
    bool st;
    wh=(wh*60)+wm;
    whe=(whe*60)+wme;
    mh=(mh*60)+mm;
    mhe=(mhe*60)+mme;
    if(whe<mh)
        st=false;
    else if(wh>mhe)
        st=false;
    else
        st=true;
    if(st==false)
        cout<<"Case "<<t<<": "<<"Hits Meeting"<<endl;
    else
        cout<<"Case "<<t<<": "<<"Mrs Meeting"<<endl;

    }
    return 0;
}
