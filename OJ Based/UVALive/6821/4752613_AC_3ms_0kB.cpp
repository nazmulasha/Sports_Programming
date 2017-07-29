#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        int u,v,w,x,y;
        cin>>u>>v>>w>>x>>y;
        bool st=true;
        if(a==u)
            st=false;
        if(v==b)
            st=false;
        if(c==w)
            st=false;
        if(d==x)
            st=false;
        if(e==y)
            st=false;
        if(st==true)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
