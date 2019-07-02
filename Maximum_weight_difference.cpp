#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        ll A[N],sum=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        sort(A,A+N);
        for(int i=0;i<K;i++)
        {
            sum-=(A[i]+A[i]);
        }
        cout<<sum<<endl;

    }
}
