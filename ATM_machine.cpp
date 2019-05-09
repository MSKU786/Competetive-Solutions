#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int A,B,sum=0;
        cin>>A>>B;
        int S[A];
        string ans= "";
        for(int i=0;i<A;i++)
        {
            cin>>S[i];
            sum=sum+S[i];
            if(B>=sum)
               ans = ans + "1";
            else
            {
                ans = ans + "0";
                sum=sum-S[i];
            }
        }
        cout<<ans <<endl;
}
}
