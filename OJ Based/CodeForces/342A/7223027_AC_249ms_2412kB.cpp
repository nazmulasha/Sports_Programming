#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int>m;
    int one=0,two=0,th=0,four=0,six=0,bal=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            one++;
        else if(arr[i]==2)
            two++;
        else if(arr[i]==3)
            th++;
        else if(arr[i]==6)
            six++;
        else if(arr[i]==4)
            four++;
        else
            bal++;
    }
    if(bal>0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(one==n)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(one==0)
    {
      //  cout<<"aha"<<endl;
        cout<<-1<<endl;
        return 0;
    }
  //  cout<<one<<endl<<two<<endl<<th<<endl<<four<<endl<<six<<endl;
    int xp=six-th;
    if(one==six+four&&one==two+th&&six>=th&&two==(six-th)+four)
    {
        for(int i=0;i<n/3;i++)
        {
            if(two>0)
            {
                cout<<1<<" "<<2<<" ";
                if(four>0){
                    cout<<4<<endl;
                    four--;
                }
                else{
                    cout<<6<<endl;
                    six--;
                }
                two--;
            }
            else if(th>0)
            {
                cout<<1<<" "<<3<<" "<<6<<endl;;

                th--;
            }
        }
    }
    else
    {
        //cout<<"uhu"<<endl;
        cout<<-1<<endl;
    }
    return 0;
}
