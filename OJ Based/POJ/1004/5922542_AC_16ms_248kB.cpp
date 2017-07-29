#include <iostream>

using namespace std;

int main()
{
    double total=0.00,en;
    for(int i=0;i<12;i++)
    {
        cin>>en;
        total+=en;
    }
    cout<<"$"<<total/12.0<<endl;
    return 0;
}
