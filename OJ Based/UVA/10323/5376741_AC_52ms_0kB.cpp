#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int arr[7];
    arr[0]=40320;
    for(int i=1;i<7;i++)
        arr[i]=(i+8)*arr[i-1];
    while(cin>>n)
    {
        if((n>=0&&n<8)||(n<0&&n%2==0))
            cout<<"Underflow!"<<endl;
        else if((n>13)||(n<0&&n%2!=0))
            cout<<"Overflow!"<<endl;
        else
            cout<<arr[n-8]<<endl;
    }
}
