#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0&&n<5)
        cout<<"few"<<endl;
    else if(n>4&&n<10)
        cout<<"several"<<endl;
    else if(n>9&&n<20)
        cout<<"pack"<<endl;
    else if(n>19&&n<50)
        cout<<"lots"<<endl;
    else if(n>49&&n<100)
        cout<<"horde"<<endl;
    else if(n>99&&n<250)
        cout<<"throng"<<endl;
    else if(n>249&&n<500)
        cout<<"swarm"<<endl;
    else if(n>499&&n<1000)
        cout<<"zounds"<<endl;
    else if(n>999)
        cout<<"legion"<<endl;
    return 0;
}
