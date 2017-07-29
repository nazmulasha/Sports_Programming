#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;


long long int summ(string str,int x,int y)
{
    long long int s;
    string ss="";
    for(int i=x;i<=y;i++)
    {
        ss+=str[i];
    }
    s=atoi(ss.c_str());
    if(s%2==0)
       return 1;
    else
        return 0;
}

int main()
{
    string str;
    int n;
    cin>>n;
    for(int t=1;t<=n;t++){
    cin>>str;
    long long int sum=0,sum2=0;
    vector <long long int> v;
    for(int i=0;i<str.size();i++)
    {

        string ss="";
       /* if(i==str.size()-1)
        {
            ss+=str[i];
            if(atoi(ss.c_str()%2==0))
                sum++;
        }*/

            for(int j=i;j<str.size();j++)
            {
                long long int xx=summ(str,i,j);
                if(xx>0)
                   sum++;
                else
                   sum2++;

            }

    }
    cout<<t<<". "<<sum<<" "<<sum2<<endl;

    }
    return 0;
}
