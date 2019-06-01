#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,race=0;
        cin>>n;
        ll A[n];
        for(ll i=0;i<n;i++)
        {
            cin>>A[i];
            if(i==0)
                race++;
            else
            {
                if(A[i]<=A[i-1])
                    race++;
            }
        }
        cout<<race<<endl;
    }
}
