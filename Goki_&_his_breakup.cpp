#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>=x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
