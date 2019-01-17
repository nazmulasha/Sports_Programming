#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <cstring>
#include <stdio.h>
#include <stack>
#include <deque>
#include <math.h>
#include <queue>
#include <stdlib.h>
#include <sstream>

#define LL          long long int
#define ULL         unsigned long long int
#define in          cin
#define out         cout
#define pb          push_back
#define ppb         pop_back
#define PI          acos(-1.0)
#define xx          first
#define yy          second
#define mkp         make_pair

#define FOR(I,A,B)  for(int I = (A); I < (B); ++I)
#define REP(I,N)    FOR(I,0,N)
#define ALL(A)      ((A).begin(), (A).end())
#define s(a)        scanf("%d",&a);
#define p(a)        printf("%d",a);
#define pf          printf
#define pln         printf("\n");
#define MAX         50
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;
    int preT;
    int preD;
    bool flag = false;
    for (int i=0 ; i < n ; i++){
        int t;cin>>t;
        if(i!=0){
            if(i!=1 && !flag){
                d = t-preT;
                if(preD!=d)
                    flag=true;
            }
            preD = t-preT;
        }
        preT = t;
    }

    if(!flag){
        cout<<preT+preD<<endl;
    }else{
        cout<<preT<<endl;
    }

    return 0;
}