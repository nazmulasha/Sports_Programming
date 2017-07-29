#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a-b+c,min(a-b-c,a-b*c))<<endl;
    return 0;
}
