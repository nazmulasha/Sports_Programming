#include <iostream>
#include <math.h>
using namespace std;

bool prime(long long int x)
{
    if(x<2)
        return false;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int x,y;
    cin>>x>>y;
    while(1)
    {
        if(x>y)
            swap(x,y);
        if(x==0&&y==0)
            break;
    int tmp=32000;
    int pri[tmp];
    int size=0;
    for(int i=x;i<=y;i++)
    {
        if(prime(i))
        {
            pri[size]=i;
            size++;
        }

    }

    for(int i=0;i<size;i++)
    {
        int arr[tmp];
        int si=0;
        int d=-1;
        for(int j=i+1;j<size;j++)
        {
            if(d==-1)
            {
                arr[si]=pri[j-1];
                si++;
                arr[si]=pri[j];
                si++;
                d=pri[j]-pri[j-1];
            }
            else
            {
                if(d==pri[j]-pri[j-1])
                {
                    arr[si]=pri[j];
                    si++;
                }
                else
                    break;

            }

        }

        if(si>2)
        {
            i=(i+si)-2;
            int t1,t2;
            t1=arr[0]-d;
            t2=arr[si-1]+d;
            if(prime(t1)&&t1<x)
                si=-1;
            if(prime(t2)&&t2>y)
                si=-1;
            if(si>2)
            {
                cout<<arr[0];
                for(int k=1;k<si;k++){
                cout<<" "<<arr[k];
               }
            }



        }
        if(si>2)
        cout<<endl;
        if(i>=size)
            break;
    }
    cin>>x>>y;
    }
    return 0;
}
