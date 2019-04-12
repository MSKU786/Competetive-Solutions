#include <bits/stdc++.h>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
    int N, even=0,odd=0;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
    	cin>>A[i];
    	if(A[i]%2==0)
    	even++;
    	else
    	odd++;
    }
    if(even>odd)
    cout<<"READY FOR BATTLE"<<endl;
    else
    cout<<"NOT READY"<<endl;
 }
