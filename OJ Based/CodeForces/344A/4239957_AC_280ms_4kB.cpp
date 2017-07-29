#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=1;
    int x;
    cin>>x;
    for(int i=1;i<n;i++)
    {
        int y;
        cin>>y;
        if(x!=y)
        {
            c++;
            x=y;
        }
    }
    cout<<c<<endl;
    return 0;
}
