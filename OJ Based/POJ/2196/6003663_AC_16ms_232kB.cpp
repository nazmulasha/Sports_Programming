#include <iostream>
#include <fstream>
using namespace std;

int decSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int hexSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%16;
        n/=16;
    }
    return sum;
}
int duoSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%12;
        n/=12;
    }
    return sum;
}
int main()
{
   // freopen("test.txt", "w", stdout);
    for(int i=2992;i<=9999;i++)
    {
        if(decSum(i)==hexSum(i)&&hexSum(i)==duoSum(i))
            cout<<i<<endl;
    }
    return 0;
}
