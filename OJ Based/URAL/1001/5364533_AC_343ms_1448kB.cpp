#include <iostream>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    vector <long long int> v;
    long long int n;
    while(cin>>n)
    {
        v.push_back(n);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        printf("%.4llf\n",sqrt(v[i]));
    }
    return 0;
}
