#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int S;
        cin>>S;
        int A[S];
        for(int i=0;i<S;i++)
            cin>>A[i];
        sort(A,A+S);
        cout<<A[0]+A[1]<<endl;
    }
}
