#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<n<<endl<<n<<endl;
    else if(n==2)
        cout<<n-1<<endl<<n-1;
    else if(n==3)
        cout<<n-1<<endl<<"1 3"<<endl;
    else if(n==4)
        cout<<n<<endl<<"3 1 4 2"<<endl;
    else
    {
        cout<<n<<endl;
        for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
