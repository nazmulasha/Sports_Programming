#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    long long int n=str.size();
    n++;
    cout<<(n*26)-(n-1)<<endl;
    return 0;
}