//just wonder recursion will work or not. i mean pre-generating
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        vector<long long int> v;
        v.push_back(0);
        v.push_back(1);
        for(int i=2;i<=n+3;i++)
        {
            v.push_back(v[i-1]+v[i-2]);
        }
        cout<<v[n+2]-1<<" "<<v[n+3]-1<<endl;
    }
    return 0;
}
