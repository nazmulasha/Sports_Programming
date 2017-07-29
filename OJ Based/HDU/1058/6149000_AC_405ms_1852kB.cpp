#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <sstream>
using namespace std;

long long int arr[5842];

void work()
{
    int a=0,b=0,c=0,d=0;
    arr[0]=1;
    for(int i=1;i<5842;i++)
    {
        int t1=arr[a]*2,t2=arr[b]*3,t3=arr[c]*5,t4=arr[d]*7;
        if(t1==(min(t1,(min(t2,(min(t3,t4)))))))
        {
            arr[i]=t1;
            a++;
        }
        else if(t2==(min(t1,(min(t2,(min(t3,t4)))))))
        {
            arr[i]=t2;
            b++;
        }
        else if(t3==(min(t1,(min(t2,(min(t3,t4)))))))
        {
            arr[i]=t3;
            c++;
        }
        else
        {
            arr[i]=t4;
            d++;
        }
        if(i>1)
        {
            if(arr[i]==arr[i-1])
                i--;
        }
    }
}
int main()
{
    work();
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        string str;
        stringstream ss;
        ss<<n;
        str=ss.str();
        reverse(str.begin(),str.end());
        int k=n%100;
        if(k>10&&k<20)
        {
            cout<<"The "<<n<<"th humble number is "<<arr[n-1]<<"."<<endl;
        }
        else if(str[0]=='1')
        {
            cout<<"The "<<n<<"st humble number is "<<arr[n-1]<<"."<<endl;
        }
        else if(str[0]=='2')
        {
            cout<<"The "<<n<<"nd humble number is "<<arr[n-1]<<"."<<endl;
        }
        else if(str[0]=='3')
        {
            cout<<"The "<<n<<"rd humble number is "<<arr[n-1]<<"."<<endl;
        }
        else
        {
            cout<<"The "<<n<<"th humble number is "<<arr[n-1]<<"."<<endl;
        }
    }
    return 0;
}
