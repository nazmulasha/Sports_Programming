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
    map<char,int>m;
    m['Q']=9;
    m['R']=5;
    m['B']=3;
    m['N']=3;
    m['P']=1;
    m['q']=9;
    m['r']=5;
    m['b']=3;
    m['n']=3;
    m['p']=1;
    long long int s1=0,s2=0;
    for(int i=0;i<8;i++)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                s1+=m[str[i]];
            else
                s2+=m[str[i]];
        }

    }
    if(s1>s2)
            cout<<"White"<<endl;
        else if(s2>s1)
            cout<<"Black"<<endl;
        else
            cout<<"Draw"<<endl;
    return 0;
}
