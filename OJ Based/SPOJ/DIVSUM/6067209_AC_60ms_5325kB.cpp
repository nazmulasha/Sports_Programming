#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define max 500000
int arr[max+5];
int main()
{
    for(int i=0;i<=max;i++)
        arr[i]=1;
    for(int i=2;i<=max;i++)
    {
        for(int j=i+i;j<=max;j+=i)
        {
            if(j%i==0)
               arr[j]+=i;
        }
    }
     arr[0]=0;arr[1]=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",arr[n]);
    }
    return 0;
}
