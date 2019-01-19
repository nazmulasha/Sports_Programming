#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    int a1=0,a2=0,a3=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
        {
            arr1[a1]=x;
            a1++;
        }
        else if(x>0)
        {
            arr2[a2]=x;
            a2++;
        }
        else
        {
            arr3[a3]=x;
            a3++;
        }
    }
    if(a2==0)
    {
        if(a1>0)
        {
            arr2[a2]=arr1[a1-1];
            a1--;
            a2++;
        }
        if(a1>0)
        {
            arr2[a2]=arr1[a1-1];
            a1--;
            a2++;
        }
    }

    if(a1%2==0)
    {
        arr3[a3]=arr1[a1-1];
        a1--;
        a3++;

    }
    cout<<a1;
    for(int i=0;i<a1;i++)
    {
        cout<<" "<<arr1[i];
    }
    cout<<endl;

    cout<<a2;
    for(int i=0;i<a2;i++)
    {
        cout<<" "<<arr2[i];
    }
    cout<<endl;

    cout<<a3;
    for(int i=0;i<a3;i++)
    {
        cout<<" "<<arr3[i];
    }
    cout<<endl;


    return 0;
}
