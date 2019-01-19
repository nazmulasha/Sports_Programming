#include <iostream>
#include <math.h>
using namespace std;
#define max 10000000
#define max2 9000010
int flag[max];
long long int arr[max];
#define on(x) (flag[x/64]&(1<<((x%64)/2)))
#define mark(x) flag[x/64] |=(1<<((x%64)/2))

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
        if(j==100005)
            break;

    }
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
        cout<<arr[i]<<" ";
    cout<<arr[n-1]<<endl;
    return 0;
}

