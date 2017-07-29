#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str,st;
    getline(cin,st);
    int n=st.size();
    int cost=100000;
    for(int i=0;i<n-5;i++)
    {
        str=st;
        int tmp=0;
        if(str[i]>95){
            tmp+=5;
            str[i]=str[i]-32;

        }
        if(str[i+1]<95){
            tmp+=5;
            str[i+1]=str[i+1]+32;
        }
        if(str[i+2]<95){
            tmp+=5;
            str[i+2]=str[i+2]+32;
        }
        if(str[i+3]<95){
            tmp+=5;
            str[i+3]=str[i+3]+32;
        }
        if(str[i+4]<95){
            tmp+=5;
            str[i+4]=str[i+4]+32;
        }
        if(str[i+5]<95){
            tmp+=5;
            str[i+5]=str[i+5]+32;
        }
        //cout<<str<<endl;
        if(str[i]!='S')
            tmp+=5;
        if(str[i+1]!='a')
            tmp+=5;
        if(str[i+2]!='n')
            tmp+=5;
        if(str[i+3]!='d')
            tmp+=5;
        if(str[i+4]!='r')
            tmp+=5;
        if(str[i+5]!='o')
            tmp+=5;

        if(tmp<cost)
            cost=tmp;
    }
    cout<<cost<<endl;
    return 0;
}
