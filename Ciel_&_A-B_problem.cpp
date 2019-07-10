#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,gg=0;
    cin>>a>>b;
    ll sub = a-b;
    if(sub%10==9)
        cout<<sub-1<<endl;
    else
        cout<<sub+1<<endl;
}

