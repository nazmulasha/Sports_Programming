#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector <long long int> v;
#define MAX 1e18

void gen_Lucky(long long int x)
{
    if(x>MAX)
        return;
    v.push_back(x);
    long long int y=x*10;
    gen_Lucky(y+4);
    gen_Lucky(y+7);
}


int main()
{

    gen_Lucky(0);
    sort(v.begin(),v.end());
    long long int a,b,c;
    cin>>a>>b;
    long long int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=a&&b>v[i])
        {
            c=v[i]-a+1;
            sum+=c*v[i];
            a=v[i]+1;
        }
        else if(v[i]>=b&&a<=b)
        {
            c=b-a+1;
            sum+=c*v[i];
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}