#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,str2;
        cin>>str>>str2;
        reverse(str.begin(),str.end());
        reverse(str2.begin(),str2.end());
        long long int sum=atoi(str.c_str())+atoi(str2.c_str());
        stringstream ss;
        ss<<sum;
        str=ss.str();
        reverse(str.begin(),str.end());
        sum=atoi(str.c_str());
        cout<<sum<<endl;
    }
    return 0;
}
