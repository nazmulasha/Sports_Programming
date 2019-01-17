#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    while(m--)
    {
        int a,b;
        char c1,c2;
        cin>>a>>b>>c1>>c2;
        a--;
        b--;
        for(int i=a;i<=b;i++)
        {
            if(str[i]==c1)
                str[i]=c2;
        }
    }


    cout<<str<<endl;

    return 0;
}