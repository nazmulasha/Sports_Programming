#include <iostream>

using namespace std;
#define mx 999999999999999
int main()
{
    string str;
    cin>>str;
    if(str.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    long long int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=(str[i]-'0');
    }
    int t=1;
    while(sum>9)
    {
        long long int tmp=0;
        while(sum)
        {
            tmp+=(sum%10);
            sum/=10;
        }
        sum=tmp;
        t++;
    }
    cout<<t<<endl;
    return 0;
}
