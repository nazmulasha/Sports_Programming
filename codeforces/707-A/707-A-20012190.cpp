#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    bool f=true;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c!='W'&&c!='G'&&c!='B')
                f=false;
        }
    }
    if(f)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}