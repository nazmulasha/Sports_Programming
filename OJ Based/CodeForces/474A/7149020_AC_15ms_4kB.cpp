#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<char,char>L;
    L['q']='w';
    L['w']='e';
    L['e']='r';
    L['r']='t';
    L['t']='y';
    L['y']='u';
    L['u']='i';
    L['i']='o';
    L['o']='p';
    L['p']='p';
    L['a']='s';
    L['s']='d';
    L['d']='f';
    L['f']='g';
    L['g']='h';
    L['h']='j';
    L['j']='k';
    L['k']='l';
    L['l']=';';
    L[';']=';';
    L['z']='x';
    L['x']='c';
    L['c']='v';
    L['v']='b';
    L['b']='n';
    L['n']='m';
    L['m']=',';
    L[',']='.';
    L['.']='/';
    L['/']='/';
    map<char,char>R;
    R['q']='q';
    R['w']='q';
    R['e']='w';
    R['r']='e';
    R['t']='r';
    R['y']='t';
    R['u']='y';
    R['i']='u';
    R['o']='i';
    R['p']='o';
    R['a']='a';
    R['s']='a';
    R['d']='s';
    R['f']='d';
    R['g']='f';
    R['h']='g';
    R['j']='h';
    R['k']='j';
    R['l']='k';
    R[';']='l';
    R['z']='z';
    R['x']='z';
    R['c']='x';
    R['v']='c';
    R['b']='v';
    R['n']='b';
    R['m']='n';
    R[',']='m';
    R['.']=',';
    R['/']='.';

    char c;
    string str;
    cin>>c>>str;
    if(c=='L')
    {
        for(int i=0;i<str.size();i++)
        {
            str[i]=L[str[i]];
        }
        cout<<str<<endl;
    }
    else
    {
        for(int i=0;i<str.size();i++)
        {
            str[i]=R[str[i]];
        }
        cout<<str<<endl;
    }

    return 0;
}
