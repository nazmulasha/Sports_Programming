#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        int tmp=0;
        for(int j=0;j<x;j++)
        {
            int a;
            cin>>a;
            if(a>tmp)
                tmp=a;
        }
        cout<<"Case "<<i<<": "<<tmp<<endl;
    }
    return 0;
}
