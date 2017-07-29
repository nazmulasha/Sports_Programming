#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        int total=0;
        int prev=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            total+=(x*(y-prev));
            prev=y;
        }
        cout<<total<<" miles"<<endl;
    }
    return 0;
}
