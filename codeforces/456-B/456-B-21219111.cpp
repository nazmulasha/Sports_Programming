#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int power(int x, int n) {
    x%=5;
    int res =1%5;
    while (n) {
        if ((n & 1)) {
            res = (res * x) %5;
            n--;
        }
        else {
            x=(x * x) %5;
            n>>=1;
        }
    }
    return res;
}

int solve(int x, string str) {
    x%=5;
    int res =1%5;
    int tmp=x;
    for (int i=(int)str.size()-1;i>=0;i--){
        res=(res*power(tmp,str[i]-'0'))%5;
        tmp=power(tmp,10);
    }
    return res;
}

int main()
{
    string str;
    cin>>str;

    int sum=solve(1,str)+solve(2,str)+solve(3,str)+solve(4,str);
    sum%=5;
    cout<<sum<<endl;

    return 0;
}