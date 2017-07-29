#include <iostream>

using namespace std;

void print(long long int n, int &x)
{
    x++;
    if(n==1)
        return;
    else
    {
        if(n%2!=0)
            print((n*3)+1,x);
        else
            print(n/2,x);
    }
}

int main()
{
    int x=0;
    int c;
    int temp;
    long long int p,q;
    while(cin>>p>>q)
    {
        c=0;
        if(p>q)
        {
            swap(p,q);
            c++;
        }

    x=0;
    for(int i=p;i<=q;i++)
    {
        temp=0;
        print(i,temp);
        if(temp>x)
            x=temp;
    }
    if(c>0)
        swap(p,q);
    cout<<p<<" "<<q<<" "<<x<<endl;
    }
    return 0;
}
