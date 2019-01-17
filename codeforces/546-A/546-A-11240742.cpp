#include <iostream>

using namespace std;

int main()
{
    long long int k,n,sum=0;
    int w;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum<n)
        cout<<"0"<<endl;
    else
        cout<<sum-n<<endl;
    return 0;
}