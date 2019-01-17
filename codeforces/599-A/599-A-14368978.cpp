#include <iostream>

using namespace std;

int main()
{
    long long int x,y,z;
    cin>>x>>y>>z;
    if(x>y)
        swap(x,y);
    long long int sum=x+y+z;
    if(2*(x+y)<sum)
        sum=2*(x+y);
    if(2*(x+z)<sum)
        sum=2*(x+z);
    if(2*(y+z)<sum)
        sum=2*(y+z);
    cout<<sum<<endl;
    return 0;
}