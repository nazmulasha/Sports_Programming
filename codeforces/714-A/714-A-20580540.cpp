#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    long long int r=0;
    if(a<=c)
    {
        if(c<=b)
        {
            if(d>=b)
               {
                   r=b-c+1;
                   if(e>=c&&e<=b)
                    r--;
               }

            else
            {
                r=d-c+1;
                if(e>=c&&e<=d)
                    r--;
            }


        }
    }
    else
    {
        if(d>=a)
        {
            if(d<=b)
            {
                r=d-a+1;
                if(e>=a&&e<=d)
                    r--;
            }
            else
            {
                r=b-a+1;
                if(e>=a&&e<=b)
                    r--;
            }
        }

    }
    cout<<r<<endl;
    return 0;
}