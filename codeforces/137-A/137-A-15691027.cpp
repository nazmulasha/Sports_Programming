#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int sum=0,ob=0;
    vector <char> v;
    for(int i=0;i<str.size();i++)
    {
        if(v.empty())
        {
            v.push_back(str[i]);
            ob++;
        }
        else
        {
            if(v[0]!=str[i])
            {
                v.erase(v.begin(),v.end());
                ob=1;
                sum++;
                v.push_back(str[i]);
            }
            else
            {
                if(ob==5)
                {
                    v.push_back(str[i]);
                    ob=1;
                    sum++;
                }
                else
                {
                    v.push_back(str[i]);
                    ob++;
                }
            }
        }
    }
    sum++;
    cout<<sum<<endl;
    return 0;
}