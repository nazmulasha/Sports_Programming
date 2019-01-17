#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a=1,b=2,i=1;
    for(i;;i++)
    {
        if(a+b>n)
            break;
        long long int tmp=a+b;
        a=b;
        b=tmp;
    }
    cout<<i<<endl;
    return 0;
}