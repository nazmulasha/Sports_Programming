#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
  //  long long int arr[n];
    long long int max=1,prv,cnt=1;
    cin>>prv;
    for(int i=1;i<n;i++)
    {
        long long int x;
        cin>>x;
        if(prv<x)
            cnt++;
        else
        {
            if(max<cnt)
                max=cnt;
            cnt=1;
        }
        prv=x;
    }
    if(cnt>max)
        max=cnt;
    cout<<max<<endl;
    return 0;
}