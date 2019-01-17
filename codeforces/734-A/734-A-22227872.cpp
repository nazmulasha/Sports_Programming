#include <bits/stdc++.h>

using namespace std;

bool comp(pair<float,string>p,pair<float,string>p2)
{
    if(p.first==p2.first)
        return p.second<p2.second;
    return p.first>p2.first;
}

int main()
{

    long long int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,d=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}