#include <iostream>

using namespace std;
#define max 10000000
int main()
{
    int n;
    cin>>n;
    for(long long int i=max-n;i<max;i++)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}