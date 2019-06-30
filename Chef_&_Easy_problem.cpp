#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {ll N,len=0;
        cin>>N;
        ll A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);

        ll sum=0,s=0;
        for(ll i=N-1;i>=0;i=i-2)
            sum+=A[i];
        cout<<sum<<endl;
    }
}
