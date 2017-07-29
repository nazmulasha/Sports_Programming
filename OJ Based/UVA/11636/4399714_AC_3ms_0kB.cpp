#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1;
    while(n>=0)
    {
        int tmp=0,temp=1;
        while(temp!=n)
        {
            if((n-temp)<temp)
            {
                 //cout<<n-temp<<endl;
                temp=temp+(n-temp);
                tmp++;

            }
            else
            {
                temp=temp*2;
                tmp++;
            }


        }
        cout<<"Case "<<x<<": "<<tmp<<endl;
        x++;
        cin>>n;
    }
    return 0;
}
