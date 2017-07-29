#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <algorithm>
#include <sstream>
using namespace std;
int arr[100][100];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
        }
        int mr=0,mc=0,sr,sc;
        for(int i=0;i<n;i++)
        {
            int tr=0,tc=0;
            for(int j=0;j<n;j++)
            {
                tr+=arr[i][j];
                tc+=arr[j][i];
            }
            if(tr%2!=0)
            {
                mr++;
                sr=i;
            }
            if(tc%2!=0)
            {
                mc++;
                sc=i;
            }
        }
        if(!mr&&!mc)
            cout<<"OK"<<endl;
        else if(mr==1&&mc==1)
            cout<<"Change bit ("<<sr+1<<","<<sc+1<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }
    return 0;
}
