#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    long long int sum=0;
    bool ss=true;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='0')
        {
            ss=false;
            break;
        }
    }
    if(ss)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<str.size();i++)
    {
        sum+=(str[i]-'0');
    }
    long long int tmp=sum%3;
    string tp="";
    ss=false;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='0')
            ss=true;
        if(ss)
            tp+=str[i];
    }
    str=tp;
    if(tmp==0)
    {

        cout<<str<<endl;
        return 0;
    }
    if(str.size()==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(tmp==1)
    {
        bool two=false,one=false;
        string s=str;
        int k;
        ss=false;
        int ser;
        for(int i=str.size()-1;i>=0;i--)
        {
            int n=str[i]-'0';
            if(n%3==1)
            {
                one=true;
                ss=true;
                s[i]='B';
                k=i;
                break;
            }
        }
        if(ss){
        if(k>0||(k==0&&s[k+1]!='0')||str.size()==2)
        {
            bool pr=false;
            for(int i=0;i<str.size();i++)
            {
                if(s[i]!='B'){
                    cout<<str[i];
                    pr=true;
                }
            }
            if(!pr)
                cout<<0;
            cout<<endl;

            return 0;
        }
        int cnt=0;
        for(int i=1;i<str.size();i++)
        {
            if(str[i]=='0')
                cnt++;
            else
                break;
        }
        int flag=0;
        for(int i=str.size()-1;i>0;i--)
        {
            int n=str[i]-'0';
            if(n%3==2)
            {
                flag++;
                s[i]='T';
            }
            if(flag==2)
            {
                two=true;
                break;
            }
        }
        if(two)
        {
            for(int i=0;i<str.size();i++)
            {

                if(s[i]=='T')
                    continue;
                cout<<str[i];
            }
            cout<<endl;
            return 0;
        }
        else
        {

            bool pr=false;
            bool sq=false;
            for(int i=1;i<str.size();i++)
            {
                if(str[i]!='0')
                    sq=true;
                if(sq==true){
                    cout<<str[i];
                    pr=true;
                }
            }
            if(!pr)
                cout<<0;
            cout<<endl;

            return 0;
        }
        }
        else
        {

            two=false;
            int flag=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            int n=str[i]-'0';
            if(n%3==2)
            {
                flag++;
                s[i]='T';
            }
            if(flag==2)
            {
                two=true;
                break;
            }
        }
        if(two&&str.size()>2)
        {
            if(s[0]!='T'){
            for(int i=0;i<str.size();i++)
            {
                if(s[i]=='T')
                    continue;
                cout<<str[i];
            }
            cout<<endl;
            return 0;
            }
            else
            {
                bool pr=false;
                bool qs=false;
                for(int i=1;i<str.size();i++)
                {
                    if(str[i]!='0'&&s[i]!='T')
                        qs=true;
                    if(qs)
                    {

                        if(s[i]=='T')
                            continue;
                        cout<<str[i];
                        pr=true;
                    }
                }
                if(!pr)
                    cout<<0;
                cout<<endl;
                return 0;

            }

        }
        cout<<-1<<endl;
        }
    }
    else if(tmp==2)
    {
        bool two=false;
        string s=str;
        int k;
        ss=false;
        for(int i=str.size()-1;i>=0;i--)
        {
            int n=str[i]-'0';
            if(n%3==2)
            {
                ss=true;
                s[i]='B';
                k=i;
                break;
            }
        }
        if(ss){

        if(k>0||(k==0&&s[k+1]!='0')||str.size()==2)
        {
            bool pr=false;
            for(int i=0;i<str.size();i++)
            {
                if(s[i]!='B'){
                    cout<<str[i];
                    pr=true;
                }
            }
            if(!pr)
                cout<<0;
            cout<<endl;

            return 0;
        }
        int cnt=0;
        for(int i=1;i<str.size();i++)
        {
            if(str[i]=='0')
                cnt++;
            else
                break;
        }
        int flag=0;
        for(int i=str.size()-1;i>0;i--)
        {
            int n=str[i]-'0';
            if(n%3==1)
            {
                flag++;
                s[i]='T';
            }
            if(flag==2)
            {
                two=true;
                break;
            }
        }
        if(two)
        {
            for(int i=0;i<str.size();i++)
            {
                if(s[i]=='T')
                    continue;
                cout<<str[i];
            }
            cout<<endl;
            return 0;
        }
        else
        {
            bool pr=false;
            bool qr=false;
            for(int i=1;i<str.size();i++)
            {
                if(str[i]!='0')
                    qr=true;
                if(qr){
                    cout<<str[i];
                    pr=true;
                }
            }
            if(!pr)
                cout<<0;
            cout<<endl;

            return 0;
        }
        }
        else
        {

            two=false;
            int flag=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            int n=str[i]-'0';
            if(n%3==1)
            {
                flag++;
                s[i]='T';
            }
            if(flag==2)
            {
                two=true;
                break;
            }
        }
        if(two&&str.size()>2)
        {
            if(s[0]!='T'){
            for(int i=0;i<str.size();i++)
            {
                if(s[i]=='T')
                    continue;
                cout<<str[i];
            }
            cout<<endl;
            return 0;
            }
            else
            {
                bool pr=false;
                bool qs=false;
                for(int i=1;i<str.size();i++)
                {
                    if(str[i]!='0'&&s[i]!='T')
                        qs=true;
                    if(qs)
                    {
                        //cout<<
                        if(s[i]=='T')
                            continue;
                        cout<<str[i];
                        pr=true;
                    }
                }
                if(!pr)
                    cout<<0;
                cout<<endl;
                return 0;
            }

        }
        cout<<-1<<endl;
        }
    }
    return 0;
}