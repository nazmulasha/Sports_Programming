#include <iostream>

using namespace std;

int getPo(int arr[],int size,int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
            return i;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        char c;
        cin>>c;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(c=='P')
        {
            int tmp=1;
            int temp;
            while(tmp<=n)
            {
                int sum=0;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]==tmp)
                        break;
                    if(arr[i]>tmp)
                        sum++;
                }
                if(tmp<n)
                cout<<sum<<" ";
                tmp++;
                temp=sum;
            }
            cout<<temp<<endl;
        }
        else
        {
            int a=n;
            int arr2[n];
            for(int i=0;i<n;i++)
            {
               arr2[i]=a;
               a--;
            }
             int xx=n;
            for(int i=n-1;i>=0;i--)
            {
               int tmp=arr[i];
               int po=getPo(arr2,n,xx);
               for(int j=po;j>tmp;j--)
                 {
                    int t1=arr2[j];
                    int t2=arr2[j-1];
                    arr2[j]=t2;
                    arr2[j-1]=t1;
                 }
                 xx--;

           }
        for(int i=0;i<n-1;i++)
            cout<<arr2[i]<<" ";
        cout<<arr2[n-1]<<endl;
        }
    }
    return 0;
}
