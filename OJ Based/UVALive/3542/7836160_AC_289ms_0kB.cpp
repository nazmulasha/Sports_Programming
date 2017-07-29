#include <iostream>
#include <math.h>
using namespace std;
#define max 100000000
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
        if(j==500000)
            break;

    }

    long long int n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        bool ss=true;
        int i=0;
        long long int xp=n;
        while(n>1)
        {
            if(n%arr[i]==0)
            {
                if(arr[i]%10!=3)
                {
                    ss=false;
                    break;
                }
                n/=arr[i];
                i=0;
            }

            else
            i++;
        }
        if(ss)
            cout<<xp<<" YES"<<endl;
        else
            cout<<xp<<" NO"<<endl;
    }
    return 0;
}

