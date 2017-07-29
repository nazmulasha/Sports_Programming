#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    int sum=0;
    while(cin>>n)
    {
        if(n<0)
            break;
        if(n==0)
        {
            for(int i=0;i<v.size();i++)
            {
                for(int j=0;j<v.size();j++)
                {
                    if(v[i]==v[j]*2)
                        sum++;
                }
            }
            cout<<sum<<endl;
            sum=0;
            v.erase(v.begin(),v.end());
        }
        else
        {
            v.push_back(n);
        }

    }
    return 0;
}
