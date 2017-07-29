#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

    int x,y,z;
    cin>>x>>y>>z;
    cout<<4*((sqrt((x*y)/z))+sqrt((y*z)/x)+sqrt((x*z)/y))<<endl;
    return 0;
}

