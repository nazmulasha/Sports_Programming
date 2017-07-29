#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=0;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        int tmp=(y-x)+1;
        sum=sum+tmp;
    }
    int f=0;
    while(sum%b!=0)
    {
        sum++;
        f++;
    }
    cout<<f<<endl;
}
