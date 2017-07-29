#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int arr[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
long long int coin[30001];
void work()
{
    coin[0]=1;
    for(int i=0;i<11;i++)
    {
        for(int j=arr[i];j<30001;j++)
        {
            coin[j]+=coin[j-arr[i]];
        }
    }
}
int main()
{
    double n;
    work();
    while(cin>>n)
    {
        double temp=n*100;
        int tmp=(int)temp;
        if(tmp%5!=0)
            tmp++;
      //  cout<<tmp<<endl;
        if(tmp==0)
            break;
      //  cout<<coin[tmp]<<endl;
     // cout<<setw(3)<<setiosflags(ios::right)<<setprecision()<<n<<setw(17)<<setiosflags(ios::right)<<coin[tmp]<<endl;
     //   printf("%.2f",n);
      //  cout<<setw(17)<<setiosflags(ios::right)<<coin[tmp]<<endl;
      //printf("6.2lf%17.lld\n",n,coin[tmp]);
      printf("%6.2lf%17.lld\n",n,coin[tmp]);
    }
    return 0;
}
