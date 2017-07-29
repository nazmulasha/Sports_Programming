#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int arr[10];
        int tmp;
        cin>>tmp;
        for(int j=0;j<10;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+10);
        cout<<tmp<<" "<<arr[7]<<endl;
    }
    return 0;
}
