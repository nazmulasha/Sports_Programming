#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    char c='r',p='b';
    long long int s1=0,s2=0,s3=0,s4=0,ans;
    for(int i=0;i<str.size();i++)
    {
        if(i%2==0)
        {
            if(str[i]=='b')
                s1++;
            else
                s4++;
        }
        else
        {
            if(str[i]=='b')
                s3++;
            else
                s2++;
        }
    }

    cout<<min(max(s1,s2),max(s3,s4))<<endl;
    return 0;
}
