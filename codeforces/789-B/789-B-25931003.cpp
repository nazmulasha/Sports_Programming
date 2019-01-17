#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int b,q,l,m;
    cin>>b>>q>>l>>m;
    unordered_map<long long int,int>ma;
    for(int i=0;i<m;i++)
    {
        long long int tmp;
        cin>>tmp;
        ma[tmp]=1;
    }
    if(abs(b)>l)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(q==0)
    {
        if(ma[0]>0&&ma[b]>0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            if(ma[0]==0)
              cout<<"inf"<<endl;
            else if(ma[b]==0&&b<=l)
                cout<<1<<endl;
            else
                cout<<0<<endl;
            return 0;
        }
    }
    if(q==1)
    {
        if(ma[b])
            cout<<0<<endl;
        else
           cout<<"inf"<<endl;

        return 0;
    }
    if(q==-1)
    {
        if(ma[b]>0&&ma[-1*b]>0)
            cout<<0<<endl;
        else
            cout<<"inf"<<endl;
        return 0;
    }
    if(b==0)
    {
        if(ma[b])
            cout<<0<<endl;
        else
            cout<<"inf"<<endl;
        return 0;
    }
    if(q>1)
    {

        long long int sum=0;
        for(b;abs(b)<=l;)
        {
            if(!ma[b]){
                sum++;
               // cout<<b<<endl;
            }
            b=b*q;
        }
        cout<<sum<<endl;
        return 0;
    }
    long long int sum=0;
    for(b;abs(b)<=l;)
    {
        if(!ma[b])
            sum++;
        b=b*q;
    }
    cout<<sum<<endl;
    return 0;

}