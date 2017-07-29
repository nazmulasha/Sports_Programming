#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> s,q,se;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.push_back(x);
            q.push_back(x);
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            se.push_back(x);
        }
        bool sta=true,que=true;
        for(int i=0;i<n;i++)
        {
            if(se[i]!=s[i])
            {
                sta=false;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(se[i]!=q[i])
            {
                que=false;
                break;
            }
        }
        if(que&&sta)
            cout<<"both"<<endl;
        else if(que)
            cout<<"queue"<<endl;
        else if(sta)
            cout<<"stack"<<endl;
        else
            cout<<"neither"<<endl;
    }
    return 0;
}
