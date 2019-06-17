
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    int total = (N*(N+1))/2;
    if(total == sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
//https://www.codechef.com/problems/DIVIDING
