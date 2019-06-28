#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        if(N==0)
            cout<<1<<endl;
        else{
            ll temp = (N*(N+1))/2;
            cout<<temp+N<<endl;
        }
    }
}
