#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll N,M;
	cin>>N>>M;
	while(M--)
	{
		ll q,ans;
		cin>>q;

		if(q<(N+2) || q>(3*N))
		{
			cout<<"0"<<endl;
		}
		 else if(q<=((2*N)+1))
		{
			ans=q-N-1;
			cout<<ans<<endl;
		}
		else
		{
			ans=(3*N)-q+1;
			cout<<ans<<endl;
		}
	}
	return 0;
}
//https://www.codechef.com/problems/RRSUM
