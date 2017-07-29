#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        long long int sum1=0,sum2=0;
        while(n--){
        string str;
        cin>>str;
        int m;
        cin>>m;

        if(str=="DROP")
        {
            cout<<"DROP 2 "<<m<<endl;
            sum2+=m;
        }
        else
        {
            if(sum1>=m)
            {
                cout<<"TAKE 1 "<<m<<endl;
                sum1-=m;
            }
            else
            {
                if(sum1)
                cout<<"TAKE 1 "<<sum1<<endl;
                m-=sum1;
                cout<<"MOVE 2->1 "<<sum2<<endl;
                cout<<"TAKE 1 "<<m<<endl;
                sum1=sum2;
                sum1-=m;
                sum2=0;

            }

        }
        }
        cout<<endl;
    }
    return 0;
}
