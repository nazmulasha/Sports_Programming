#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

#define max 1000000
int arr[max];

int work(int x)
{
    int sum=0;
    int i=2;
    while(x)
    {
        if(x%i==0)
        {
            sum++;
            x=x/i;
        }

        else
            i++;
        if(i*i>x)
            break;
    }
    if(x!=1)
        sum++;
        return sum;
}

int result(int n)
{
    if(n==1)
        return 0;
    else
        return work(n)+result(n-1);
}

int main()
{
    int x;
    arr[1]=0;
    for(int i=2;i<=max;i++)
        arr[i]=work(i)+arr[i-1];

    while(cin>>x)
    {
        cout<<arr[x]<<endl;
    }

    return 0;
}
