#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x0,x1,x2,x3,y0,y1,y2,y3;
    cin>>x0>>y0>>x1>>y1>>x2>>y2;
    cout<<3<<endl;
    cout<<x0+x1-x2<<" "<<y0+y1-y2<<endl;
    cout<<x0+x2-x1<<" "<<y0+y2-y1<<endl;
    cout<<x1+x2-x0<<" "<<y1+y2-y0<<endl;

    return 0;
}