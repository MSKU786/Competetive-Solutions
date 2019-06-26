#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,n,c=0,ans=0;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	for (int i = 0; i < n; ++i)
	{
		c=0;
		while(v[i]!=0 && i<n)
			c++,i++;
		if(c>ans)
			ans=c;
	}
	cout<<ans<<endl;
	return 0;
}
