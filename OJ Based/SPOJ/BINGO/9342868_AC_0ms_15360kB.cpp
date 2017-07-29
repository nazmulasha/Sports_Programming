#include <bits/stdc++.h>

using namespace std;
int gcd ( int a, int b ) {
    if ( b == 0 ) return a;
    return gcd ( b, a % b );
}

int main()
{
   // freopen("in.txt","r",stdin);
    string str;
    int w=0,b=0,wc=0;
    set<string> ss;
    while(cin>>str)
    {

        if(str=="BULLSHIT")
        {
            w+=ss.size();
            b++;
            ss.clear();
            continue;
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        string tmp="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                tmp+=str[i];
            else
            {
                if(tmp.size()>0){
                    ss.insert(tmp);
                    tmp="";
                }
            }
        }

        if(tmp.size()>0)
            ss.insert(tmp);
    }
    int dd=gcd(w,b);
    w/=dd;
    b/=dd;
    cout<<w<<" / "<<b<<endl;
    return 0;
}
