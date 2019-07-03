#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        int len = S.length();
        for(int i=0;i<len;i++)
        {
            if(S[i]=='#')
                continue;
            else if(S[i]=='.'&&S[i+1]=='#')
            {
                count++;

        }
    }
}
