

#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	while(num--)
	{
	    int a=0,b=0,c=0,d=0;
	    cin>>a>>b>>c>>d;
	    b = 60-b;
	    int s= b+d;
	    if(s>=60)
	    {
	        c=c+1;

	    }
	    cout<<(c-a-1)<<" "<<(s%60)<<endl;
	}// Writing output to STDOUT
}


