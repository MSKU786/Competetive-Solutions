#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int  N,sum=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];

        }
        sort(A,A+N);

        for(int i=N-1;i>=0;i=i-4)
        {
            cout<<A[i]<<endl;
            sum = sum+ A[i]+A[i-1];
        }
        cout<<sum<<endl;
    }
}

