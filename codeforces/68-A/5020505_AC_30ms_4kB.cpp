#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
        cin>>arr[i];
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        int tmp=i;
        for(int j=0;j<4;j++)
        {
            tmp=tmp%arr[j];
        }
        if(tmp==i)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
