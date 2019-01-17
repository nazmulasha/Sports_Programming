#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool dis1=false,dis2=false,ss=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            if(dis1==true)
                ss=false;
        }
        if(arr[i]%2==1)
        {
            if(dis1==false)
                dis1=true;
            else
            {
                int tmp=arr[i];
                tmp--;
                if(tmp>0)
                {
                    if(tmp%2==1)
                        dis1=true;
                    else
                        dis1=false;
                }
                else
                    dis1=false;
            }
        }
        else
        {
            if(dis1==true)
            {
                dis1=true;
            }
        }
    }
    if(dis1==true)
        ss=false;
    if(ss==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}