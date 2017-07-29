#include <iostream>

using namespace std;


int arr[5]={1,5,10,25,50};
long long int coin[30001];
void work()
{
    coin[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=arr[i];j<30001;j++)
        {
            coin[j]+=coin[j-arr[i]];
        }
    }
}
int main()
{
    int n;
    work();
    while(cin>>n)
    {
        if(coin[n]==1)
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else
            cout<<"There are "<<coin[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }
    return 0;
}
