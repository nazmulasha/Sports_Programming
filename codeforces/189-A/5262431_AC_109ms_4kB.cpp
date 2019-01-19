#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            int z=n-i*a-j*b;
            if (z%c==0&&sum<i+j+z/c&&z>=0)
            {
                sum=i+j+z/c;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
