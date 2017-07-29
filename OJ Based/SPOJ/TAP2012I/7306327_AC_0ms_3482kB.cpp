#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0,cnt=0;
        if(n==-1)
            break;
        int x;
        for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(sum%100==0)
        {
            cnt++;
            sum=0;
        }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
