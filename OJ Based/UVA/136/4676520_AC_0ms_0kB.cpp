#include <iostream>
#include <math.h>
using namespace std;

#define max 1000000000
/*
bool factor(long long int x)
{
    while(x%2==0)
    {
        x=x/2;
    }
    while(x%3==0)
    {
        x=x/3;
    }
    while(x%5==0)
    {
        x=x/5;
    }
    if(x==1)
        return true;
    else
        return false;
}
*/
int main()
{
    /*long long int arr[1509];
    arr[10]=15;
    int j=11;
    for(long long int i=16;i<max;i++)
    {
        if(j>1500)
            break;
        if(factor(i))
        {
            arr[j]=i;
            j++;
        }
    }
    cout<<arr[1500];
    */
    cout<<"The 1500'th ugly number is 859963392."<<endl;
    return 0;
}
