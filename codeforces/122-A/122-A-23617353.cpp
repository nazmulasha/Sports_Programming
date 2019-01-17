#include <iostream>

using namespace std;

int main()
{
    int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin>>n;
    bool ss=false;
    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            ss=true;
            break;
        }
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}