#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int arr[10005];
    for(int i=0;i<10005;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<10005;i++)
    {
        int sum=i;
        string str;
        stringstream ss;
        ss<<i;
        str=ss.str();
        for(int i=0;i<str.size();i++)
        {
            string sss="";
            sss+=str[i];
            sum+=atoi(sss.c_str());
        }
        if(sum<10001)
            arr[sum]=1;
    }
    for(int i=1;i<10001;i++)
    {
        if(arr[i]==0)
            cout<<i<<endl;
    }
    return 0;
}
