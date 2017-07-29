#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
#define mx 999999999999999

bool leap(int y)
{
    if(y%400==0)
        return true;
    else if(y%100==0)
        return false;
    else if(y%4==0)
        return true;
    else
        return false;
}
int arr[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int ar[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
    map<string,int>m;
    m["JAN"]=1;
    m["FEB"]=2;
    m["MAR"]=3;
    m["APR"]=4;
    m["MAY"]=5;
    m["JUN"]=6;
    m["JUL"]=7;
    m["AUG"]=8;
    m["SEP"]=9;
    m["OCT"]=10;
    m["NOV"]=11;
    m["DEC"]=12;
    int d,y,total=0;
    char c,x;
    string str,ss;
    cin>>ss;
    //cout<<ss<<endl;
    d=((ss[0]-'0')*10)+(ss[1]-'0');
    str="";
    for(int i=3;i<=5;i++)
        str+=ss[i];
   // str+=(ss[3]+ss[4]+ss[5]);
    y=((ss[7]-'0')*1000)+((ss[8]-'0')*100)+((ss[9]-'0')*10)+(ss[10]-'0');
    //cout<<d<<" "<<str<<" "<<y<<endl;
    if(leap(y))
    {
        total=ar[m[str]-1]+d;
    }
    else
    {
        //cout<<m[str]<<endl;
        total=arr[m[str]-1]+d;
    }
   // cout<<total<<endl;
    if(total>360)
    {
        str="Ones";
        d=total-360;
    }
    else if(total>300&&total<361)
    {
        str="Tens";
        d=total-300;
    }
    else
    {
        str="Hundreds";
        d=total;
    }
    cout<<"Case "<<cas<<": "<<d<<" "<<str<<endl;
    }
    return 0;
}
