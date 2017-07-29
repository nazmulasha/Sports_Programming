
//previously done

#include <iostream>
#include <string>
using namespace std;



int main()
{
    string s;
    bool st=true;
    int n;
    cin>>s>>n;
    if(s.length()%n!=0)
        cout<<"NO"<<endl;
    else{
    int x=s.length()/n;
    for(int i=0;i<s.length();i=i+x)
    {
        int temp=i+x-1;
        for(int j=i;j<x+i;j++)
        {
          if(s[j]!=s[temp])
            st=false;
          temp--;
        }


    }
    if(st==false)
        cout<<"NO";
    else
        cout<<"YES";
    }
    return 0;
}
