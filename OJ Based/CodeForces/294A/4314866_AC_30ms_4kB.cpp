#include <iostream>

using namespace std;

int main()
{
    int w;
    cin>>w;
    int arr[w];
    for(int i=0;i<w;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x-1>0)
        {
            arr[x-2]=arr[x-2]+(y-1);
        }
        if(x+1<w+1)
        {
            arr[x]=arr[x]+(arr[x-1]-y);
        }
        arr[x-1]=0;
    }
    for(int i=0;i<w;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
