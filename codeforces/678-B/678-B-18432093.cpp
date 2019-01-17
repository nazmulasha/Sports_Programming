#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
long long int arr[100005];
bool check(int y)
{
    if(y%4!=0)
        return false;
    else if(y%100!=0)
        return true;
    else if(y%400!=0)
        return false;
    else
        return true;
    //return false;
}
string str[7]={"Sun","Mon","Tue","Wed","Thr","Fri","Sat"};
int main()
{
    int yy;
    cin>>yy;
    int tmp=0,y=yy;
    bool ss=check(y);
    while(1)
    {
        tmp+=7;
        if(check(y))
        {
            if(tmp>=366)
            {
                tmp-=366;
                y++;
            }

        }
        else
        {
             if(tmp>=365)
                {
                tmp-=365;
                y++;
            }
        }
        if(tmp==0){
        if(y!=yy)
        {
            if(check(y)==ss)
            {
                break;
            }
        }
        }
    }
    cout<<y<<endl;

    return 0;
}