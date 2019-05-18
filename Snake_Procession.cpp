#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string S;
        cin>>n;
        cin>>S;
        int sum =0;
        string ans = "Valid";
        for(int i=0;i<n;i++)
        {
            if(S[i]=='H')
            sum += 1;
            else if(S[i]=='T')
                sum -=1;
            else
                continue;
            if(sum==-1 or sum>1)
                break;
        }
        if(sum==0)
            cout<<ans<<endl;
        else
            cout<<"Invalid"<<endl;
    }
}
