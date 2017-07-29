#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        int arr[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int avg=sum/n;
            int m=0;
            int st=0;
            for(int i=0;i<n;i++)
            {
               if(arr[i]==avg)
                continue;
               else if(arr[i]<avg)
               {
                   m+=(avg-arr[i]);
                   st+=(avg-arr[i]);
               }
            }
            cout<<m<<endl;
        }

    }
    return 0;
}
