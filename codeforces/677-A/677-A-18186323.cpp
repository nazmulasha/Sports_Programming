#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int sum=n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>h)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}