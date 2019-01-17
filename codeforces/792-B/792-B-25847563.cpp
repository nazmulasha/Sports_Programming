#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int ar[n+1];
    for(int i=0;i<n+1;i++)
        ar[i]=1;
    int tot=n;
    int leader=1;
    for(int i=0;i<k;i++)
    {
        //cout<<"ch="<<arr[i]<<" "<<tot<<" "<<arr[i]%tot<<" leader="<<leader<<endl;
        int tmp=arr[i]%tot;
        if(tmp==0)
            tmp=tot;
        //tmp+=tot;
        for(int j=leader+1;;j++)
        {
          //  cout<<"test"<<endl;
            if(j>n)
                j=1;
            if(ar[j]>0)
            {
                tmp--;
            }
            if(tmp==0)
            {
                cout<<j<<" ";
                ar[j]=0;
                j++;
                if(j>n)
                    j=1;
                while(1)
                {
                    if(ar[j]>0)
                        break;
                    j++;
                    if(j>n)
                        j=1;
                }
                leader=j;
                tot--;
                break;
            }


        }
    }
    cout<<endl;
    return 0;
}