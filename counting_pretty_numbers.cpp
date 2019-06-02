#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	long long l,r,count;

	while(t--)
	{
		cin>>l>>r;
		count=0;

		for(long long i=l ; i<=r ; i++)
		{
			if(i%10==2 || i%10==3 || i%10==9)
			{
				count++;
			}
		}

		cout<<count<<"\n";
	}
}
