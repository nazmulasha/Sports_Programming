#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int i=1;
    while(i<=n*n)
    {
        for(int u=0;u<n;u++)
        {
            if(u%2==0)
            {
            for(int v=0;v<n;v++)
            {
                arr[u][v]=i;
                i++;
            }
            }
            else
            {
                for(int v=n-1;v>=0;v--)
            {
                arr[u][v]=i;
                i++;
            }
            }
        }

    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
