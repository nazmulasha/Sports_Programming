#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    n%=4;
    if(n==0)
    {
        cout<<"undefined"<<endl;
    }
    else if(n==1)
    {
        if(a=='<')
        {
            if(b=='v')
                cout<<"ccw"<<endl;
            else if(b=='^')
                cout<<"cw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='^')
        {
            if(b=='<')
                cout<<"ccw"<<endl;
            else if(b=='>')
                cout<<"cw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='>')
        {
            if(b=='^')
                cout<<"ccw"<<endl;
            else if(b=='v')
                cout<<"cw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='v')
        {
            if(b=='>')
                cout<<"ccw"<<endl;
            else if(b=='<')
                cout<<"cw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
    }

    else if(n==2)
    {
        cout<<"undefined"<<endl;
    }

    else if(n==3)
    {
        if(a=='<')
        {
            if(b=='v')
                cout<<"cw"<<endl;
            else if(b=='^')
                cout<<"ccw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='^')
        {
            if(b=='<')
                cout<<"cw"<<endl;
            else if(b=='>')
                cout<<"ccw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='>')
        {
            if(b=='^')
                cout<<"cw"<<endl;
            else if(b=='v')
                cout<<"ccw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
        else if(a=='v')
        {
            if(b=='>')
                cout<<"cw"<<endl;
            else if(b=='<')
                cout<<"ccw"<<endl;
            else
                cout<<"undefined"<<endl;
        }
    }


    return 0;
}