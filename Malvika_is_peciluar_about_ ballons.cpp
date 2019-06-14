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
        int a=0,b=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='a')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
}
//https://www.codechef.com/problems/CHN09
