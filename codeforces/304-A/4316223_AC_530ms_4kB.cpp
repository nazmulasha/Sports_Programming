#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int temp=(i*i)+(j*j);
            int tmp=sqrt(temp);
            if(tmp*tmp>n*n)
                continue;
            if(tmp*tmp==temp)
                sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
