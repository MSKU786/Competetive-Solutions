#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a[6]={0};
	    cin>>n;
	    string s;
	    while(n--)
	    {
	        cin>>s;
	        int i=0;
	        while(s[i]!='\0')
	        {
	            if(s[i]=='c')
	            a[0]+=1;
	            else if(s[i]=='o')
	            a[1]+=1;
	            else if(s[i]=='d')
	            a[2]+=1;
	            else if(s[i]=='e')
	            a[3]+=1;
	            else if(s[i]=='h')
	            a[4]+=1;
	            else if(s[i]=='f')
	            a[5]+=1;
	            i++;
	        }


	    }
	    a[0]/=2;
	    a[3]/=2;
	    int minm=*min_element(a,a+6);
	    cout<<minm<<"\n";
	}

}
