#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include <cstring>
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
        string sa="";
        bool ss=true;
        int i;
        if(str.size()>10){
        for(i=0;i<10;i++)
        {
            sa+=str[i];
        }}
        else
            ss=false;
            i++;
        if(ss&&sa=="Simon says")
        {
            for(i;i<str.size();i++)
                cout<<str[i];
            cout<<endl;
        }
        else
        {
           continue;
        }
    }

    return 0;
}
