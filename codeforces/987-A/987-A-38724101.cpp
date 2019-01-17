#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr[6]={"Power","Time","Space","Soul","Reality","Mind"};
    string ar[6]={"purple","green","blue","orange","red","yellow"};
    int cnt=0;
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        m[str]=1;
    }
    cout<<6-n<<endl;
    for(int i=0;i<6;i++)
    {
        if(m[ar[i]]==0)
            cout<<arr[i]<<endl;
    }
    return 0;
}