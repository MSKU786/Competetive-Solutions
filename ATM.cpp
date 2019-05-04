#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if((int(a)%5==0.00)  and  (b-a-0.5>0))
        cout<<(b-a-0.5);
    else
        cout<<(b+0.0);
}
