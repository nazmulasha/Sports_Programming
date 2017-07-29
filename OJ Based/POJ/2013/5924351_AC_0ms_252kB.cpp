//just wonder recursion will work or not. i mean pre-generating
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int x=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        vector<string> v,v2;
        for(int t=1;t<=n;t++)
        {
            string str;
            cin>>str;
            v.push_back(str);
        }
        cout<<"SET "<<x<<endl;
        x++;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                cout<<v[i]<<endl;
            else
                v2.push_back(v[i]);
        }
        for(int i=v2.size()-1;i>=0;i--)
            cout<<v2[i]<<endl;

    }
    return 0;
}
