#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int sum=0;
        string str,str2;
        int n;
        cin>>n>>str>>str2;
        for(int i=0;i<n;i++)
        {
            string tmp="",tmp2="";
            tmp+=str[i];
            tmp2+=str2[i];
            int x,y;
            x=atoi(tmp.c_str());
            y=atoi(tmp2.c_str());
            if(x<y)
            {
                sum+=min((y-x),(x+10-y));
            }
            else
            {
                sum+=min((x-y),(y+10-x));
            }
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }
    return 0;
}
