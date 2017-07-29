#include <iostream>
#include <string>
using namespace std;

string hm[19]={"pop", "no", "zip", "zotz", "tzec","xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan","pax", "koyab", "cumhu", "uayet"};
string fm[20]={"imix", "ik", "akbal", "kan", "chicchan","cimi", "manik", "lamat", "muluk", "ok","chuen", "eb", "ben", "ix", "mem", "cib","caban", "eznab", "canac", "ahau"};
int hmI(string str)
{
    for(int i=0;i<19;i++)
    {
        if(str==hm[i])
            return i;
    }
}
int main()
{
    int t;
    cin>>t;
    cout<<t<<endl;
    while(t--){
    int n,y;
    char c;
    string mon;
    cin>>n>>c>>mon>>y;
    long long int day=y*365;
    int ind=hmI(mon);
    day+=(ind*20);
    day+=n;
    day++;
    int fs=day/260;
    if(day%260==0)
        fs--;
    int fd=day%13;
    if(day%13==0)
    {
        fd=13;
    }
    ind=day%20;
    if(day%20==0)
        ind=20;
    cout<<fd<<" "<<fm[ind-1]<<" "<<fs<<endl;
    }
    return 0;
}
