#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int size=s.size();
    int x,arr[100];
    int j=0;
    for(int i=0;i<size;i++)
    {
        string temp;
        if(s[i]=='1'||s[i]=='2'||s[i]=='3')
            {
                temp=s[i];
                int mn=atoi(temp.c_str());
                arr[j]=mn;
                j++;
            }
    }
    sort(arr,arr+j);
    for(int i=0;i<j-1;i++)
    {
        cout<<arr[i]<<"+";
    }
    cout<<arr[j-1]<<endl;
    return 0;
}
