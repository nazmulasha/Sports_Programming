#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,tmp=0,h=0,j=0;
    while(n>=sum)
    {
         h++;
         j=tmp+h;
         tmp=j;
         sum+=j;
    }
    h--;
    cout<<h<<endl;
    return 0;
}
