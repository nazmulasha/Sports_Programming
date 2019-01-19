#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string str,ans="";
    cin>>str;
    int j=0;
    int n=str.size();
    stack<char>st;
    for(int i=0;i<str.size();i++)
    {
        if(st.size())
        {
            if(str[i]==st.top()){
            while(st.size()&&str[i]==st.top())
            {
                st.pop();
            }
            }
            else
            {
                st.push(str[i]);
            }
        }
        else
        {
            st.push(str[i]);
        }
    }

    while(st.size())
    {
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}
