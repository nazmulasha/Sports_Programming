#include <iostream>
#include <math.h>
using namespace std;

string four(int x)
{
    return "4";
}
string seven()
{
    return "7";
}

int main()
{

    int n;
    string x;
    cin>>x;
    n=x.size();
    int temp2=n-1;
    int temp=pow(2,n);
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]=='7')
            t=t+pow(2,temp2);
        temp2--;
    }

    cout<<temp+t-1;

    return 0;
}