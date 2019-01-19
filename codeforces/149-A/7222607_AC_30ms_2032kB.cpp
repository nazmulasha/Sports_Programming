#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++)
        cin>>arr[i];
    sort(arr,arr+12);
    int tmp=0;
    int ans=0;
    for(int i=11;i>=0;i--)
    {
        if(tmp>=k)
            break;
        tmp+=arr[i];
        ans++;
    }
    if(tmp<k)
        cout<<-1<<endl;
    else
    cout<<ans<<endl;
    return 0;
}
