#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin>>n>>str;

    for(int i=0;i<str.size();i++)
    {
        string ss="";
        for(int j=i;j<str.size();j++)
        {
            ss+=str[j];
            string tmp=ss;
            int sz=tmp.size()/2;
            int arr[26];
            memset(arr,0,sizeof(arr));
            for(int k=0;k<tmp.size();k++)
                arr[tmp[k]-'a']++;
            bool sp=true;
            for(int k=0;k<26;k++)
            {
                if(arr[k]==0)
                    continue;
                if(arr[k]>sz)
                {
                    sp=false;
                    break;
                }
            }
            if(sp)
            {
                cout<<"YES"<<endl<<tmp<<endl;
                return 0;
            }
        }
    }


    cout<<"NO"<<endl;

    return 0;
}