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
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                arr[str[i]-'A']++;
            if(str[i]>='a'&&str[i]<='z')
                arr[str[i]-'a']++;
        }
        bool ss=true;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                ss=false;
                break;
            }
        }
        if(ss)
        {
            cout<<"pangram"<<endl;
        }
        else
        {
            cout<<"missing ";
            for(int i=0;i<26;i++)
            {
                if(arr[i]==0)
                {
                    cout<<c[i];
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
