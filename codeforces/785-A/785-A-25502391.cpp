#include <bits/stdc++.h>

using namespace std;

void inp()
{
    #ifdef nazmulasha
    freopen("in.txt","r",stdin);
    #endif //nazmulasha
}
int main()
{
    //inp();
    map<string,int> m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;
    int n;
    cin>>n;
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        ans+=m[str];
    }
    cout<<ans<<endl;

    return 0;
}