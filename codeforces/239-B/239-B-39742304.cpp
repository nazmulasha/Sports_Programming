#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        string ss="";
        for(int i=l-1;i<=r-1;i++)
            ss+=str[i];

        map<int,int>m;
        int i=0,x=1;
        int cnt=0;

        while(1)
        {
          //  cout<<i<<" "<<ss[i]<<endl;
            if(i<0||i>=ss.size())
                break;
            if(ss[i]>='0'&&ss[i]<='9')
            {
                int xp=ss[i]-'0';
                m[xp]++;
                xp--;
                if(xp==-1)
                {
                    string tmp="";
                    for(int j=0;j<i;j++)
                        tmp+=ss[j];
                    for(int j=i+1;j<ss.size();j++)
                        tmp+=ss[j];
                    ss=tmp;
                    int pre=i;
                    i+=x;
                    if(pre<i)
                        i--;
                    //i--;
                }
                else{
                    ss[i]=xp+'0';
                i+=x;
                }
            }
            else if(ss[i]=='<')
            {
                x=-1;
                int pre=i;
                i+=x;
                if(i>=0&&i<ss.size())
                {
                    if(ss[i]=='>'||ss[i]=='<')
                    {
                        string tmp="";
                        for(int j=0;j<pre;j++)
                            tmp+=ss[j];
                        for(int j=pre+1;j<ss.size();j++)
                            tmp+=ss[j];
                        ss=tmp;
                        if(pre<i)
                            i--;
                    }
                }
            }
            else
            {
                x=1;
                int pre=i;
                i+=x;
                if(i>=0&&i<ss.size())
                {
                    if(ss[i]=='>'||ss[i]=='<')
                    {
                        string tmp="";
                        for(int j=0;j<pre;j++)
                            tmp+=ss[j];
                        for(int j=pre+1;j<ss.size();j++)
                            tmp+=ss[j];
                        ss=tmp;
                        if(pre<i)
                            i--;
                    }
                }
            }
        }
        for(int i=0;i<=9;i++)
            cout<<m[i]<<" ";
        cout<<endl;
    }
    return 0;
}