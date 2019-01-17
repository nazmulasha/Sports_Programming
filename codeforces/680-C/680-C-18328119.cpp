#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int arr[20]={2,3,4,5,7,9,11,13,17,19,23,25,29,31,33,37,41,43,47,49};
    int ar[20];
    for(int i=0;i<20;i++)
        ar[i]=0;
    for(int i=0;i<20;i++)
    {
        printf("%d\n",arr[i]);
        fflush(stdout);
        string str;
        cin>>str;
        if(str=="yes")
            ar[i]++;
    }
    bool ss=true;
    int sum=0;
    for(int i=0;i<20;i++)
        sum+=ar[i];
    if(sum>1)
        ss=false;
    if(ss)
        cout<<"prime"<<endl;
    else
        cout<<"composite"<<endl;
    fflush(stdout);
    return 0;
}