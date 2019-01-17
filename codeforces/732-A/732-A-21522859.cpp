#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int sum=1;
    for(int i=1;;i++)
    {
        if((n*i)%10==k||(n*i)%10==0)
           break;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}