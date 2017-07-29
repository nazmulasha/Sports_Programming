#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==0&&y==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(x-y)==1)
            cout<<"No Number"<<endl;
        else if(y>x||x>y+2)
            cout<<"No Number"<<endl;
        else
        {
            if(x%2==0&&y%2==0)
                cout<<x+y<<endl;
            else
                cout<<x+y-1<<endl;
        }

    }
    return 0;
}
