#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        int arr[n+5];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        bool ss=true;
        while(ss)
        {
            ss=false;
            for(int i=1;i<=n;i++)
            {
                if(arr[i]==i)
                {
                    ss=true;
                    for(int j=1;j<i;j++)
                        arr[j]++;
                    arr[i]=0;
                    break;
                }
            }
        }
        ss=true;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>0)
            {
                ss=false;
                break;
            }
        }
        if(ss)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
