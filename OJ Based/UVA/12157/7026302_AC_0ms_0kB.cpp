#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n;
        cin>>n;
        int sum=0,m=0,j=0;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            sum+=tmp;
            int mtmp=tmp+30;
            int jtmp=tmp+60;
            m+=((mtmp/30));
            j+=((jtmp/60));
        }
        m*=10;
        j*=15;
        //int mm=(sum/30)*10;
        //int jj=(sum/60)*15;
        //cout<<mm<<" "<<jj<<endl;

        if(m<j)
            cout<<"Case "<<tt<<": Mile "<<m<<endl;
        else if(j<m)
            cout<<"Case "<<tt<<": Juice "<<j<<endl;
        else
            cout<<"Case "<<tt<<": Mile Juice "<<m<<endl;
    }
    return 0;
}


