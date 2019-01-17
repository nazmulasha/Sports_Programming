#include <bits/stdc++.h>

using namespace std;
#define mod 131071

bool ch(int a,int b,int c,int d)
{
    if(a==b&&a==c&&a==d)
        return true;
    return false;
}
int main()
{
    int arr[25];
    for(int i=1;i<25;i++)
        cin>>arr[i];
    if(ch(arr[17],arr[18],arr[19],arr[20])&&ch(arr[13],arr[14],arr[15],arr[16]))
    {
        if(ch(arr[1],arr[3],arr[6],arr[8])&&ch(arr[22],arr[24],arr[2],arr[4])&&ch(arr[9],arr[11],arr[21],arr[23])&&ch(arr[5],arr[7],arr[10],arr[12]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ch(arr[1],arr[3],arr[21],arr[23])&&ch(arr[2],arr[4],arr[5],arr[7])&&ch(arr[6],arr[8],arr[9],arr[11])&&ch(arr[10],arr[12],arr[22],arr[24]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(ch(arr[1],arr[2],arr[3],arr[4])&&ch(arr[9],arr[10],arr[11],arr[12]))
    {
        if(ch(arr[5],arr[6],arr[19],arr[20])&&ch(arr[17],arr[18],arr[23],arr[24])&&ch(arr[21],arr[22],arr[15],arr[16])&&ch(arr[13],arr[14],arr[7],arr[8]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ch(arr[5],arr[6],arr[15],arr[16])&&ch(arr[13],arr[14],arr[23],arr[24])&&ch(arr[21],arr[22],arr[19],arr[20])&&ch(arr[17],arr[18],arr[7],arr[8]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(ch(arr[5],arr[6],arr[7],arr[8])&&ch(arr[23],arr[24],arr[21],arr[22]))
    {
        if(ch(arr[1],arr[2],arr[17],arr[19])&&ch(arr[18],arr[20],arr[9],arr[10])&&ch(arr[11],arr[12],arr[14],arr[16])&&ch(arr[13],arr[15],arr[3],arr[4]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(ch(arr[1],arr[2],arr[14],arr[16])&&ch(arr[18],arr[20],arr[3],arr[4])&&ch(arr[11],arr[12],arr[17],arr[19])&&ch(arr[13],arr[15],arr[9],arr[10]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}