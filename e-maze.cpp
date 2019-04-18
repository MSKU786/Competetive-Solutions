#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int X=0,Y=0;
    for(int i =0;i<S.length();i++)
    {
        if(S[i]=='L')
            X-=1;
        else if(S[i]=='R')
            X+=1;
        else if(S[i]=='D')
            Y-=1;
        else
            Y+=1;
    }
    cout<<X<<" "<<Y;
}
