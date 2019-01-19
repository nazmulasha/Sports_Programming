#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=str.size()-1;i>=0;i--)
    {
        int n=str[i]-'0';
        if(n<5)
        {
            cout<<"O-|";
            for(int j=0;j<n;j++)
                cout<<"O";
            cout<<"-";
            for(int j=0;j<4-n;j++)
                cout<<"O";
            cout<<endl;
        }
        else
        {
            cout<<"-O|";
            n-=5;
            for(int j=0;j<n;j++)
                cout<<"O";
            cout<<"-";
            for(int j=0;j<4-n;j++)
                cout<<"O";
            cout<<endl;
        }
    }
    return 0;
}
