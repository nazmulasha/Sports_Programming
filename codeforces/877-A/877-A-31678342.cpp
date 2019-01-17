#include <bits/stdc++.h>

using namespace std;

long long int lcm(long long int a,long long int b)
{
    return (a/__gcd(a,b))*b;
}

int main()
{
    string str;
    cin>>str;
    string s1="Danil",s2="Olya",s3="Slava",s4="Nikita",s5="Ann";
    int cnt=0;
    if (str.find(s1) != std::string::npos)
    {
        int ct=0;
        size_t nPos = str.find(s1, 0); // fist occurrence
        while(nPos != string::npos)
        {
            ct++;
            nPos = str.find(s1, nPos+1);
        }
        if(ct>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cnt++;
    }
    if (str.find(s2) != std::string::npos)
    {
        int ct=0;
        size_t nPos = str.find(s2, 0); // fist occurrence
        while(nPos != string::npos)
        {
            ct++;
            nPos = str.find(s2, nPos+1);
        }
        if(ct>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cnt++;
    }
    if (str.find(s3) != std::string::npos)
    {
        int ct=0;
        size_t nPos = str.find(s3, 0); // fist occurrence
        while(nPos != string::npos)
        {
            ct++;
            nPos = str.find(s3, nPos+1);
        }
        if(ct>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cnt++;
    }
    if (str.find(s4) != std::string::npos)
    {
        int ct=0;
        size_t nPos = str.find(s4, 0); // fist occurrence
        while(nPos != string::npos)
        {
            ct++;
            nPos = str.find(s4, nPos+1);
        }
        if(ct>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cnt++;
    }
	if (str.find(s5) != std::string::npos)
    {
        int ct=0;
        size_t nPos = str.find(s5, 0); // fist occurrence
        while(nPos != string::npos)
        {
            ct++;
            nPos = str.find(s5, nPos+1);
        }
        if(ct>1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
            cnt++;
    }
    if(cnt==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;

}