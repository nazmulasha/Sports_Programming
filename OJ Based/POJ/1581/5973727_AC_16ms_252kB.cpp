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
    //cin>>t;
    while(cin>>t)
    {
        string str,fs;
      //  int arr[t][2];
        int max=0,pm=99999999;
        for(int i=0;i<t;i++)
        {
           // string s;
            cin>>str;
            int n=0,p=0;
            for(int j=0;j<4;j++)
            {
                int x,y;
                cin>>x>>y;
                if(y==0)
                    continue;
                n++;
                x--;
                p+=(y+(x*20));
            }

            if(n>=max&&p<pm)
            {
                fs=str;
                max=n;
                pm=p;
            }
        }
        cout<<fs<<" "<<max<<" "<<pm<<endl;
    }
    return 0;
}
