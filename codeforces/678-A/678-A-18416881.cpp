#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main()
{

    long long int n,k;
    cin>>n>>k;
    long long int r=n-(n%k)+k;
    cout<<r<<endl;
    return 0;
}