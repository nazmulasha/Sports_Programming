//bitwise sieve copied from progkriya blog


#include <iostream>
#include <math.h>
using namespace std;
#define max 19000000
#define max2 9000010
int flag[max];
long long int arr[max];
#define on(x) (flag[x/64]&(1<<((x%64)/2)))
#define mark(x) flag[x/64] |=(1<<((x%64)/2))

int main()
{
    int t;

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
    int ar[100000];
    int ar2[100000];
    int ll=0,mm=0;
    for(int i=0;i<j-1;i++)
    {
        if(arr[i]+2==arr[i+1])
        {
            ar[ll]=arr[i];
            ll++;
            ar2[mm]=arr[i+1];
            mm++;
        }
        if(ll>=100000)
            break;
    }
    while(cin>>t)
    {
        cout<<"("<<ar[t-1]<<", "<<ar2[t-1]<<")"<<endl;
    }
    return 0;
}

