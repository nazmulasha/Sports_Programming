#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double d,a,b,f,sum=0;
        cin>>d>>a>>b>>f;
        //cout<<d<<endl;
        int tmp=d;
        int aa=2;
        while(d)
        {
            if(d<0.0001)
                break;
            if(aa%2==0){
            double bp=(100*b)/(b+f);
            double fp=(100*f)/(b+f);
            double bd=(d*bp)/100;
            double fd=(d*fp)/100;
            double time=bd/b;
            double ad=(time*a);
            d=d-(ad+bd);
            //cout<<d<<endl;
            sum+=fd;
            aa++;



            }
            else
            {
                double ap=(100*a)/(a+f);
                double fp=(100*f)/(a+f);
                double ad=(d*ap)/100;
                double fd=(d*fp)/100;
                double time=ad/a;
                double bd=(time*b);
                d=d-(ad+bd);
                sum+=fd;
                aa++;

            }
        }
        printf("%d %.2f\n",n,sum);

    }
    return 0;
}
