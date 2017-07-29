#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string str;
        getchar();
        getline(cin,str);

        int n;
        cin>>n;
        int tmp;
        cin>>tmp;
        n--;
        if(tmp<0)
            tmp=tmp+str.size();
        cout<<x<<" "<<str[tmp];
        while(n>0)
        {
            int temp;
            cin>>temp;
            tmp+=temp;
            int si=str.size();
            if(tmp>=si)
            {
                tmp=tmp%si;
            }
            else if(tmp<0)
            {

                tmp=tmp+si;
               // cout<<"{"<<str[tmp]<<"}";
            }
            cout<<str[tmp];
            n--;
        }
        cout<<endl;
    }
    return 0;
}
