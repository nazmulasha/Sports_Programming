#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1,y1,x2,y2,a,b;
    cin>>x1>>y1>>x2>>y2>>a>>b;
    if(abs(x1-x2)%a==0&&abs(y1-y2)%b==0)
    {
        int tmp=abs(x1-x2)/a;
        int tmp2=abs(y1-y2)/b;
        if(tmp2%2==tmp%2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    else
        cout<<"No"<<endl;
    return 0;
}