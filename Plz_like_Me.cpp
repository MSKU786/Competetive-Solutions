#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll req,D,S,C;
        cin>>req>>D>>S>>C;
        ll sum =0;
        for(int i=1;i<=d;i++)
        {
        sum = S * pow((1+C),i-1);
        if(sum>=req)
            break;
        }
        if(sum>=req)
            cout<<"ALIVE AND KICKING"<<endl;
        else
            cout<<"DEAD AND ROTTING"<<endl;
    }
}
