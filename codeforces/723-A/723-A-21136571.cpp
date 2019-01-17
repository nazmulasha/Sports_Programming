#include <iostream>
#include <map>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int tmp=abs(a-b)+abs(a-c);
    tmp=min(tmp,abs(b-a)+abs(b-c));
    tmp=min(tmp,abs(c-b)+abs(a-c));
    cout<<tmp<<endl;
    return 0;
}