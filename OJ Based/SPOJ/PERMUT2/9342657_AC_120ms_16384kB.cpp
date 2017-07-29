#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n+1],dest[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            dest[arr[i]]=i;
        }
        bool ss=true;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]!=dest[i])
            {
                ss=false;
                break;
            }
        }
        if(ss)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
    return 0;
}

