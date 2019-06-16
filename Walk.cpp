#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,temp=0,min=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]>=temp)
            {
                min =i;
                temp = A[i];
            }
        }
        cout<<temp+min<<endl;


    }
}
