#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int i,j=0,count=0;
		string M,W,MAN,WOMEN;
		cin>>M>>W;

		if(M.length()>=W.length())
		{
			MAN=M;
			WOMEN=W;
		}
		else
		{
			MAN=W;
			WOMEN=M;
		}

		for(i=0;i<MAN.size();i++)
		{
			if(MAN[i]==WOMEN[j])
			{
				count++;
				j++;
			}
		}

		if(count==WOMEN.size())
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
