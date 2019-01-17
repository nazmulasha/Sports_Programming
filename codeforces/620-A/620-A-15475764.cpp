#include <iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;

int main()
{
    long long int x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<max(abs(x-a),abs(y-b))<<endl;
    return 0;
}