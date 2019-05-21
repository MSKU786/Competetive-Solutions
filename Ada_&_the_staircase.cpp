#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K,cnt=0;
        cin>>N>>K;
        int A[N+1];
        A[0]=0;
        for(int i=1;i<N+1;i++)
        {
            cin>>A[i];

                cnt = cnt + ((A[i]-A[i-1]-1)/K);

        }
        cout<<cnt<<endl;
    }
}
