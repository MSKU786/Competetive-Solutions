#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a,b,N;
        cin>>a>>b>>N;
        if(N%2==1)
            a=a*2;
        if(a>b)
            cout<<a/b<<endl;
        else
            cout<<b/a<<endl;
    }
}
