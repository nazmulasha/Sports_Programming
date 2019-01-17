#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str,str2;
    cin>>str>>str2;
    int arr[10];
    int arr2[10];
    int arr3[10];
    memset(arr,0,sizeof(arr));
    memset(arr2,0,sizeof(arr2));

    for(int i=0;i<n;i++)
    {
        arr[str2[i]-'0']++;
        arr2[str2[i]-'0']++;
    }
    string tmp=str;
    sort(tmp.begin(),tmp.end());
    int cnt=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int d=tmp[i]-'0';
        bool found=false;
        if(arr[d])
        {
            //cout<<"Yes"<<endl;
            arr[d]--;
            found=true;
        }

        if(!found)
        {
            for(int j=d+1;j<10;j++)
            {
                if(arr[j])
                {
                //  cout<<"Yes"<<endl;
                    found=true;
                    arr[j]--;
                    break;
                }
            }
        }
        if(!found)
        {
            for(int j=0;j<d;j++)
            {
                if(arr[j])
                {
                  //  cout<<d<<" "<<j<<endl;
                    cnt++;
                    found=true;
                    arr[j]--;
                    break;
                }
            }
        }
    }
    int mn=cnt;
    cnt=0;
    for(int i=0;i<n;i++)
    {
        int d=tmp[i]-'0';
        bool found=false;

            for(int j=d+1;j<10;j++)
            {
                if(arr2[j])
                {
                //  cout<<"Yes"<<endl;
                    cnt++;
                    found=true;
                    arr2[j]--;
                    break;
                }
            }
        if(!found){
        if(arr2[d])
        {
            //cout<<"Yes"<<endl;
            arr2[d]--;
            found=true;
        }
        }


        if(!found)
        {
            for(int j=0;j<d;j++)
            {
                if(arr2[j])
                {
                  //  cout<<d<<" "<<j<<endl;
                    //cnt++;
                    found=true;
                    arr2[j]--;
                    break;
                }
            }
        }
    }
    mx=cnt;
    cout<<mn<<endl<<mx<<endl;
}