#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,K ,N;
    cin>>n;

    while(n--)
    {
        int a=0;
        int sum=0;
        cin>>N>>K;
           int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]>1)
                a++;
        }
           if(a>K)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
    return 0;
}
