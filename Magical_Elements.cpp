#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int count=0;
        ll N,K,sum=0;
        cin>>N>>K;
        ll A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        for(int i=0;i<N;i++)
        {
            if((sum-A[i])<(A[i]+K))
                count++;
        }
        cout<<count<<endl;
    }
}
