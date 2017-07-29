#include <iostream>
#include <math.h>
using namespace std;
#define max 10000000
//#define max2 9000010
int flag[max];
long long int arr[max];
#define on(x) (flag[x/64]&(1<<((x%64)/2)))
#define mark(x) flag[x/64] |=(1<<((x%64)/2))
int fin[max];
int main()
{
    long long int num=sqrt(max);
    for(long long int i=3;i<num;i+=2)
    {
        if(!on(i))
        {
        for(long long int j=i*i;j<max;j+=i<<1)
        {
            mark(j);
        }
        }
    }
    long long int j=1;
    arr[0]=2;
    for(long long int i=3;i<max;i+=2)
    {
        if(!on(i))
        {
            arr[j]=i;
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        for(int k=arr[i];k<max;k+=arr[i])
        {
            fin[k]++;
        }
    }

    int t;
    cin>>t;
   // cout<<fin[1000000]<<endl;
    for(int i=0;i<t;i++)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        int count=0;
        for(int c=a;c<=b;c++)
        {
            if(fin[c]==n)
                count++;
        }
        cout<<"Case #"<<i+1<<": "<<count<<endl;
    }
    return 0;
}

