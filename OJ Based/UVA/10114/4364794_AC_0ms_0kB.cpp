#include <iostream>

using namespace std;

int main()
{
    int n;
    double m1,p1,price,ow;
    cin>>m1>>p1>>price>>n;
    double arr[10000];
    while(m1>=0)
    {
        double m2=price/m1;
        double tmp=price;
        price+=p1;
        for(int i=0;i<=m1;i++)
        {
            arr[i]=-1;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cin>>arr[x];
        }
        for(int i=1;i<=m1;i++)
        {
            if(arr[i]==-1)
                arr[i]=arr[i-1];
        }
        int tmp2=-1,i=0;
        while(tmp2==-1)
        {
            price=price-(price*arr[i]);
            if(price>tmp)
                tmp2=i;
            tmp=tmp-m2;
            i++;
        }
        if(tmp2==1)
            cout<<tmp2<<" month"<<endl;
        else
            cout<<tmp2<<" months"<<endl;
        cin>>m1>>p1>>price>>n;
    }


    return 0;
}
