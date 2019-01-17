#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,tmp;
    scanf("%d",&n);
    long long int b=0,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        sum+=tmp;
        if(b==0){
        if(tmp%2==1)
            b++;
        }
    }
    bool sxor=false;
    if(sum%2==1)
    {
        sxor=true;
    }
    else if(b>0)
        sxor=true;

    if(sxor)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}