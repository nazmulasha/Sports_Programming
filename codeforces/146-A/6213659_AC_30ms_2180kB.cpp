#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <cstdio>
using namespace std;

void setn(int arr[],int n)
{
    for(int i=0;i<n;i++)
        arr[i]=0;
}
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool ss=true;
    for(int i=0;i<n;i++)
    {
        if(str[i]!='4')
        {
            if(str[i]!='7')
            {
                ss=false;
                break;
            }
        }

    }
    if(ss)
    {
        int mid=n/2;
        long long int sum=0,sm=0;
        for(int i=0;i<mid;i++)
        {
            sum+=(str[i]-'0');

        }
        for(int i=mid;i<n;i++)
        {
            sm+=(str[i]-'0');

        }
        if(sm!=sum)
            ss=false;
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
