#include <bits/stdc++.h>

using namespace std;
#define mod 131071

int main()
{
    int n;
    cin>>n;
    int arr[n][6];
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
            if(m[arr[i][j]]==0){
                v.push_back(arr[i][j]);
                m[arr[i][j]]=1;
            }
        }
    }
    if(n>=2)
    {
        for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
                if(k==l)
                continue;
        for(int j=0;j<6;j++){
        for(int i=0;i<6;i++)
        {
            stringstream ss,ss2;
            ss<<arr[k][i];
            string str;
            str=ss.str();
            ss2<<arr[l][j];
            string tmp;
            tmp=ss2.str();
            string fn=str;
            fn+=tmp;
            int num=atoi(fn.c_str());
            if(m[num]==0)
            {
                m[num]=1;
                v.push_back(num);
            }
            reverse(fn.begin(),fn.end());
            num=atoi(fn.c_str());
            if(m[num]==0)
            {
                m[num]=1;
                v.push_back(num);
            }
        }
        }
        }
        }
    }
    if(n==3)
    {
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                for(int k=0;k<6;k++)
                {
                    stringstream ss1,ss2,ss3;
                    ss1<<arr[0][i];
                    string s1,s2,s3;
                    s1=ss1.str();
                    ss2<<arr[1][j];
                    ss3<<arr[2][k];
                    s2=ss2.str();
                    s3=ss3.str();
                    string fn="";
                    fn+=s1+s2+s3;
                    int num=atoi(fn.c_str());
                    //cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                    reverse(fn.begin(),fn.end());
                    num=atoi(fn.c_str());
                    //cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                    fn="";
                    fn+=s1+s3+s2;
                    num=atoi(fn.c_str());
                    //cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                    reverse(fn.begin(),fn.end());
                    num=atoi(fn.c_str());
                    //cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                    fn="";
                    fn+=s2+s1+s3;
                    num=atoi(fn.c_str());
                   // cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                    reverse(fn.begin(),fn.end());
                    num=atoi(fn.c_str());
                    //cout<<num<<" ";
                    if(m[num]==0)
                    {
                        m[num]=1;
                        v.push_back(num);
                    }
                }
            }
        }
    }
    int ans=0;
    sort(v.begin(),v.end());
    int ar[1001];
    for(int i=0;i<1001;i++)
        ar[i]=i;
    ar[6]=9;
    ar[9]=6;

    while(1)
    {
        int curr=ans+1;
        bool ss=true;
        if(m[curr]==0)
        {
            break;
            ss=false;
            if(curr==6)
            {
                if(m[9]>0)
                    ss=true;
            }
            else if(curr==9)
            {
                if(m[6]>0)
                    ss=true;
            }
            else if(curr==66||curr==69||curr==96||curr==99)
            {
                if(m[69]+m[96]+m[99]+m[66]>0)
                    ss=true;
            }
            else if(curr==666||curr==669||curr==696||curr==699||curr==966||curr==969||curr==996||curr==999)
            {
                if(m[666]+m[669]+m[696]+m[699]+m[966]+m[969]+m[996]+m[999]>0)
                    ss=true;
            }
        }
        if(ss==false)
        {
            cout<<curr<<endl;
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}