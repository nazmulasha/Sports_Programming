#include <iostream>

using namespace std;



int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x==a||y==b)
                cout<<"divisa"<<endl;
            else if(x<a)
            {
                if(y>b)
                    cout<<"NO"<<endl;
                else
                    cout<<"SO"<<endl;
            }
            else if(x>a)
            {
                if(y>b)
                    cout<<"NE"<<endl;
                else
                    cout<<"SE"<<endl;
            }
        }
        cin>>n;
    }

    return 0;
}
