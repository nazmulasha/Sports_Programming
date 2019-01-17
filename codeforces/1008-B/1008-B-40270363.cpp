#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>> str;
    int sum=0;
    int i=0;
    while(i<str.length())
    {
        if(str[i]=='n'|| str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            i++;
        }
        else if(str[i]!='a'|| str[i]!='e'|| str[i]!='i' || str[i]!='o' || str[i]!='u'||str[i]!='n')
        {
            if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
            {
                i++;
            }
            else
            {
                sum = sum+1;
                i++;
            }
        }

    }

    if(sum==0) cout << "YES" << endl;
    else cout<< "NO" << endl;


    return 0;
}