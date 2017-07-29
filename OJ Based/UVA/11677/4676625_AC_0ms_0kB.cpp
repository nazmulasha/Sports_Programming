#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int ch,cm,ah,am;
    cin>>ch>>cm>>ah>>am;
    while(1)
    {
        if(ch==0&&cm==0&&ah==0&&am==0)
            break;
        int fh=0,fm=0;
        if(am<cm)
        {
            ch++;
            fm=(60-cm)+am;
           // fh=ah-ch;
        }
        if(ah<ch)
        {
            ah+=24;
        }
        if(ah>=ch)
        {
            //fm=am-cm;
            fh=ah-ch;
        }
        if(am>=cm)
        {
            fm=am-cm;
        }
        int result;
        result=(fh*60)+fm;
        cout<<result<<endl;
        cin>>ch>>cm>>ah>>am;
    }
    return 0;
}
