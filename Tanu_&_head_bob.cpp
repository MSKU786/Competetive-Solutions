#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        string ans = "NOT SURE";
        for(int i=0;i<a;i++)
        {
            if(s[i]=='Y')
            {
                ans = "NOT INDIAN";
                break;
            }
            else if(s[i]=='I')
            {
                ans = "INDIAN";
                break;
            }
            else
                continue;
        }
        cout<<ans<<endl;
    }
}
