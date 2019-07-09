#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
    ll i,t,n,g,min;
    cin>>t;
    while(t--)
    {
     cin>>n;
     ll a[n];
     for(i=0;i<n;i++)
     cin>>a[i];

     g=a[0];
     for(i=1;i<n;i++)
     g=gcd(a[i],g);

     if(g==1)
     cout<<-1<<endl;
     else
     {
         min=g;
         for(i=2;i*i<=g;i++)
         {
             if(g%i==0)
             {
                 min=i;
                 break;
             }
         }
         cout<<min<<endl;
     }
    }
    return 0;
}
