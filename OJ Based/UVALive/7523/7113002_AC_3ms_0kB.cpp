#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;
#define mx 999999999999999


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str[0]>'0'&&str[0]<='9')
        {
            if(str[1]>'0'&&str[1]<='9')
            {
                if(str[0]==str[1])
                {
                    if(str[2]>'0'&&str[2]<='9')
                    {
                        if(str[3]>'0'&&str[3]<='9')
                        {
                            if(str[4]>='A'&&str[4]<='Z')
                            {
                                if(str[5]>'0'&&str[5]<='9')
                                {
                                    if(str[6]>'0'&&str[6]<='9')
                                    {
                                        if(str[7]>'0'&&str[7]<='9')
                                        {
                                            cout<<str<<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
