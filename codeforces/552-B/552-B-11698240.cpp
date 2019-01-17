#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

long long int gnrt(int n)
{
    string str;
    for(int i=1;i<n;i++)
        str+='9';
    return atoi(str.c_str());
}

int main()
{
    long long int n;
    string str;
    cin>>str;
    n=atoi(str.c_str());
    int x=str.length();
    long long int sum=0;
    while(n>0)
    {
        long long int t=gnrt(x);
        long long int temp=n-t;
        sum=sum+(temp*x);
        n=t;
        x--;

    }
    cout<<sum<<endl;
    return 0;
}