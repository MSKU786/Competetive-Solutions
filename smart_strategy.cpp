#include<bits/stdc++.h>
using namespace std;
void fun(int *Arr,int B,int N)
{
    for(int i=0;i<N;i++)
    {
        if(Arr[i]>B)
        {
            B=0;
            break;
        }
        else
        B = B/Arr[i];
    }
    cout<<B<<" ";
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int N,Q;
        cin>>N>>Q;
        int A[N],B[Q];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<Q;i++)
        {
            cin>>B[i];
            fun(A,B[i],N);
        }
        cout<<endl;

    }
}


