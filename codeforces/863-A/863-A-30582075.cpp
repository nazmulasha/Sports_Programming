#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n%10==0)
            n/=10;
    stringstream ss;
    ss<<n;
    string str=ss.str();
    string tmp=str;
    reverse(tmp.begin(),tmp.end());
    if(str==tmp)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}