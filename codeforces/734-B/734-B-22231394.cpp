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

    long long int two,th,fi,six;
    cin>>two>>th>>fi>>six;
    long long int fv=min(two,min(fi,six));
    long long int sum=fv*256;
    two-=fv;
    fv=min(two,th);
    sum+=(32*fv);
    cout<<sum<<endl;

    return 0;
}