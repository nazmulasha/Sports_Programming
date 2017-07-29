#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;
#define mx 999999999999999


int main()
{
    long long int n,a,b;
    while(cin>>n>>a>>b)
    {
        if(n==0&&a==0&&b==0)
            break;
        long long int tmp=floor(n/2)+1;
        long long int ac=n-(a+b);
        ac+=a;
        if(ac<tmp)
            cout<<-1<<endl;
        else if(a>tmp)
            cout<<0<<endl;
        else
            cout<<tmp-a<<endl;
    }
    return 0;
}
