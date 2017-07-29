#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,sr;
    cin>>str>>sr;
    int c=0,b=0;
    for(int i=0;i<4;i++)
    {
        if(sr[i]==str[i])
            b++;
        else
        {
            for(int j=0;j<4;j++)
            {
                if(sr[i]==str[j])
                {
                    c++;
                    break;
                }
            }
        }
    }
    cout<<b<<" "<<c<<endl;
    return 0;
}
