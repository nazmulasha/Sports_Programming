#include <iostream>
#include <stdlib.h>
using namespace std;

#define g 9.8

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long int arr2[t];
        float arr[t];
        for(int i=0;i<t;i++){
        int  l,w,h;
        cin>>l>>w>>h;

        arr[i]= g-(g/(2*h));
        arr2[i]=l*w*h;
        }

        long long int result=0;
        float pi=0;
        for(int i=0;i<t;i++)
        {
            if(arr[i]>pi)
            {
                pi=arr[i];
                result=arr2[i];
            }
            else if(arr[i]==pi)
            {
                if(arr2[i]>result)
                {
                    result=arr2[i];
                }
            }
        }
        cout<<result<<endl;
        cin>>t;
    }
    return 0;
}
