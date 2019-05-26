#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,sum=0;
        string S,ans = "";
        cin>>n;
        cin>>S;
        if(n==1)
            cout<<0<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
                    ans = ans + '1';
                else
                    ans = ans + '0';
            }
            for(int i=0;i<n;i++)
            {
                if(ans[i]=='1' && ans[i-1]=='0')
                    sum++;
            }
            cout<<sum<<endl;
        }

    }
}
