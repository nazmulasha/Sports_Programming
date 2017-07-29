#include <iostream>
#include <map>
#include <stdlib.h>
#include <bitset>
#include <math.h>
using namespace std;

unsigned long long makeD(string str)
{
    unsigned long long sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum=(sum<<1)+str[i]-'0';
    }
    return sum;
}
int main()
{
    int mm,n;
    while(cin>>mm>>n){
    map<string,unsigned long long>m;
    string ss[n];
    unsigned long long arr[n],val[n];
    for(int i=0;i<n;i++)
    {
        cin>>ss[i]>>arr[i];
        m[ss[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        string sw="";
        for(int j=0;j<arr[i];j++)
        {
            string s;
            cin>>s;
            sw+=s;
        }
        val[i]=makeD(sw);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string sq;
        cin>>sq;
        cout<<sq<<"=";
        if(m[sq]==0)
            cout<<endl;
        else
            cout<<val[m[sq]-1]<<endl;

    }
    }
    return 0;
}
