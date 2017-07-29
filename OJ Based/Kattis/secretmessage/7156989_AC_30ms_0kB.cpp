#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include <vector>
using namespace std;
char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int arr[26];
        for(int i=0;i<26;i++)
            arr[i]=0;
        string str;

        getline(cin,str);
        int l=str.size();
        int sq=sqrt(l);
        if(sq*sq!=l)
            sq++;
        vector<string>v;
        for(int i=str.size();i<sq*sq;i++)
            str+='*';
            //cout<<str<<endl;
        for(int i=0;i<str.size();i+=sq)
        {
            string ss="";
            int tmp=i;
            for(int j=i;j<i+sq;j++)
            {
                ss+=str[j];
            }
            v.push_back(ss);

        }
        for(int i=0;i<sq;i++)
        {
            for(int j=sq-1;j>=0;j--)
            {
                if(v[j][i]!='*')
                    cout<<v[j][i];
            }
        }
        cout<<endl;
    }

    return 0;
}
