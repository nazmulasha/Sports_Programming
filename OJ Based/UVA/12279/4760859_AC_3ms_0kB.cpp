#include <iostream>

using namespace std;

int main()
{
    int t,r=1;
    while(cin>>t)
    {
        if(t==0)
            break;
        int x=0,y=0;
        for(int i=0;i<t;i++)
        {
            int n;
            cin>>n;
            if(n==0)
                x++;
            else
                y++;
        }
        cout<<"Case "<<r<<": "<<y-x<<endl;
        r++;
    }
    return 0;
}
