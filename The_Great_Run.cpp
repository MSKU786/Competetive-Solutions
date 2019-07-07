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
        ll A[N],B[N-K+1],sum=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(i<K)
                sum+=A[i];
        }
        B[0]=sum;
        for(int i=1;i<N-K+1;i++)
        {
            B[i]=sum+A[K+i-1]-A[i-1];
            sum=B[i];
        }
        sort(B,B+N-K+1);
        cout<<B[N-K]<<endl;
    }
}
