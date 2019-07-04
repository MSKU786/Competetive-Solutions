#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a;
    cin>>a;
    a = a%6;
    if(a==0||a==1||a==3)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}
