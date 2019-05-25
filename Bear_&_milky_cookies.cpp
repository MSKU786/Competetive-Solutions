#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,main = 1;
        cin>>n;
        string S[n];
        for(int i=0;i<n;i++)
        {
            cin>>S[i];

        }
        for(int i=0;i<n;i++)
        {
            if(S[i]=="cookie")
                main-=1;
            else
                main =1;

            if(main==-1)
                break;

        }
        if(main==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
