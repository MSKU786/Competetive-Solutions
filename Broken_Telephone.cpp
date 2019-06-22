#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int count=0;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=1;i<N-1;i++)
        {
            if(A[i]!=A[i+1] || A[i]!=A[i-1])
                count+=1;
        }
        if(A[1]!=A[0])
            count+=1;
        if(A[N-1]!=A[N-2])
            count+=1;
        cout<<count<<endl;
    }
}
