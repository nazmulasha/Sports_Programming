#include <iostream>

using namespace std;

int GCD(int i,int j)
{
    while(i!=j)
    {
        if(i>j)
            i-=j;
        else
            j-=i;
    }
    return i;
}

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        long long int G=0;
        for(int i=1;i<n;i++)
          for(int j=i+1;j<=n;j++)
          {
           G+=GCD(i,j);
          }
          cout<<G<<endl;
          cin>>n;
    }
    return 0;
}
