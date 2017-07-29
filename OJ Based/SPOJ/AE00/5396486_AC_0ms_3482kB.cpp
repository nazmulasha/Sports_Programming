#include <iostream>
#include <math.h>
using namespace std;

int getPo(int arr[],int size,int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
            return i;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        long long int sum=n;
        for(int i=1;i<=n;i++)
        {
            int tmp=sqrt(i);
            for(int j=2;j<=tmp;j++)
            {
                if(i%j==0)
                    sum++;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}
