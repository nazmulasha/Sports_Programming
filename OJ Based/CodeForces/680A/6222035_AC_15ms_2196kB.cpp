#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5],ar[5],sum=0,total=0;
    for(int i=0;i<5;i++)
        ar[i]=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    total=sum;
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
            continue;
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                ar[i]++;
                if(ar[i]>2)
                    ar[i]=2;
                arr[j]=-1;
            }
                        else
            {
                break;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<0)
            continue;
        if(ar[i]>0)
        {
            int tmp=arr[i]*(ar[i]+1);
            tmp=total-tmp;
            sum=min(sum,tmp);
        }
    }
    cout<<sum<<endl;
    return 0;
}
