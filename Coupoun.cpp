#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int L;
        cin>>L;
        int A[3]={0,0,0};
        int C[3]={0,0,0};
        int a,b,c;
        for(int i=0;i<L;i++)
        {
            cin>>a>>b>>c;
            if(c>C[b-1])
            {
               C[b-1]=c;
               A[b-1]=a;
            }
            else if(c==C[b-1])
            {
                C[b-1]=c;
                if(A[b-1]<a&&A[b-1])
                    continue;
                else
                    A[b-1]=a;
            }
        }
        for(int i=0;i<3;i++)
            cout<<C[i]<<" "<<A[i]<<endl;
    }
}
