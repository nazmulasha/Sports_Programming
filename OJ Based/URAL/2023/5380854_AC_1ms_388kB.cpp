#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int in=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int c=0;
        if(str[0]=='A'||str[0]=='P'||str[0]=='O'||str[0]=='R')
            c=0;
        else if(str[0]=='B'||str[0]=='M'||str[0]=='S')
            c=1;
        else
            c=2;
        sum+=abs(in-c);
        in=c;
    }
    cout<<sum<<endl;
    return 0;
}
