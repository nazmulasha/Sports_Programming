#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,x;
        cin>>a>>x;
        int arr[x];
        for(int j=0;j<x;j++)
        {
            cin>>arr[j];
        }
        int sum=0;
        for(int j=0;j<x;j++)
        {
            sum+=arr[j];
            bool st=true;
            int tmp=0;
            for(int k=j+1;k<x;k++)
            {
                tmp+=arr[k];
                if(tmp>sum)
                {
                    st=false;
                    break;
                }
                else if(tmp==sum)
                    tmp=0;
            }
            if(tmp!=0)
                st=false;
            if(st==true)
            {
                cout<<a<<" "<<sum<<endl;
                break;
            }

        }
    }
    return 0;
}
