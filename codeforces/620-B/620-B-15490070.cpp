#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;


int arr[10]={6,2,5,5,4,5,6,3,7,6};
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    long long int sum=0;
    for(int i=a;i<=b;i++)
    {
        int tmp=i;
        while(tmp)
        {
            sum+=arr[tmp%10];
            tmp=tmp/10;
        }
    }
    printf("%I64d\n",sum);
    return 0;
}