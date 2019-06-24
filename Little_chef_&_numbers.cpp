#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long N,ans=0,a2=0,a3=0;
        cin>>N;
        long long A[N];
        for(long long i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]==2)
                a2++;
            if(A[i]>2)
                a3++;
        }
        ans += a3*a2;
        ans += (a3*(a3-1))/2;

        cout<<ans<<endl;

    }
}
