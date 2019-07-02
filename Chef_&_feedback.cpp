#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        string ans = "Bad";
        int j= s.length();
        for(int i=0;i<j-3;i++)
        {
            if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
            {
                ans = "Good";
                break;
            }
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
            {
                ans = "Good";
                break;
            }
        }
        cout<<ans<<endl;
    }
}
//https://www.codechef.com/problems/ERROR
