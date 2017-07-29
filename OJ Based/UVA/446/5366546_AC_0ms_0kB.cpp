#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int check(char c)
{
    if(c=='0')
        return 0;
    else if(c=='1')
        return 1;
    else if(c=='2')
        return 2;
    else if(c=='3')
        return 3;
    else if(c=='4')
        return 4;
    else if(c=='5')
        return 5;
    else if(c=='6')
        return 6;
    else if(c=='7')
        return 7;
    else if(c=='8')
        return 8;
    else if(c=='9')
        return 9;
    else if(c=='A')
        return 10;
    else if(c=='B')
        return 11;
    else if(c=='C')
        return 12;
    else if(c=='D')
        return 13;
    else if(c=='E')
        return 14;
    else if(c=='F')
        return 15;
}
int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        string a,b;
        char c;
        cin>>a>>c>>b;
        long long int x=0,y=0;
        int j=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            x+=(pow(16,j)*check(a[i]));
            j++;
        }
        j=0;
        for(int i=b.size()-1;i>=0;i--)
        {
            y+=(pow(16,j)*check(b[i]));
            j++;
        }
        long long int sum=x+y;
        long long int div=x-y;
        int arr[13]={0,0,0,0,0,0,0,0,0,0,0,0,0},arr2[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
        int m=12,n=12;
        while(x)
        {
            arr[m]=x%2;
            m--;
            x=x/2;
        }

        while(y)
        {
            arr2[n]=y%2;
            n--;
            y=y/2;
        }
        for(int i=0;i<13;i++)
            cout<<arr[i];
        if(c=='+'){
            cout<<" + ";
        }
        else
            cout<<" - ";
        for(int i=0;i<13;i++)
            cout<<arr2[i];
        if(c=='+')
            cout<<" = "<<sum<<endl;
        else
            cout<<" = "<<div<<endl;
    }
    return 0;
}
