#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,a,b;
    cin>>n>>a>>b;
    if(a>b)
        swap(a,b);
    priority_queue<int>x,y;
    for(int i=1;i<=n;i++)
        x.push(i);
    int i=0;
    while(1)
    {
        i++;
        int t1,t2;


        if(i%2==1)
        {
            if(x.size()==2)
            {
                cout<<"Final!"<<endl;
                return 0;
            }
            while(!x.empty())
            {
                t1=x.top();
                x.pop();
                t2=x.top();
                x.pop();
                if(t1>t2)
                    swap(t1,t2);
                if(t1==a&&t2==b)
                {
                    cout<<i<<endl;
                    return 0;
                }
                else if(a==t2||b==t2)
                    t1=t2;
                y.push(t1);
                //y.push(t2);
            }

        }
        else
        {
            if(y.size()==2)
            {
                cout<<"Final!"<<endl;
                return 0;
            }
            while(!y.empty())
            {
                t1=y.top();
                y.pop();
                t2=y.top();
                y.pop();
                if(t1>t2)
                    swap(t1,t2);
                if(t1==a&&t2==b)
                {
                    cout<<i<<endl;
                    return 0;
                }
                else if(a==t2||b==t2)
                    t1=t2;
                x.push(t1);
                //x.push(t2);
            }
        }
    }
    return 0;
}