#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    double n;
    while(cin>>n)
    {
        if(n==0.0)
            break;
        double sum=0;
        int count=1;
        while(1)
        {
            if(sum>n)
                break;
            sum+=(1.0/(count+1));
            count++;
        }
        count--;
        cout<<count<<" card(s)"<<endl;
    }
    return 0;
}
