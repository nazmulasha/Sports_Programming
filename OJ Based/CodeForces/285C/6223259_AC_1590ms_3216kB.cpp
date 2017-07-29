#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
}
sort(arr,arr+n);
long long int sum=0;
for(int i=0;i<n;i++)
{
sum+=abs((i+1)-arr[i]);
}
cout<<sum<<endl;
    return 0;
}