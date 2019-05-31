#include<bits/stdc++.h>
using namespace std;
int main()
{
    int G;
    cin>>G;
    while(G--)
    {
    int T;
    cin>>T;
    while(T--)
    {
        int A,N,B;
        cin>>A>>N>>B;
        int H,T;
        if(N%2==0)
        {
            cout<<(N/2)<<endl;
            continue;
        }
        else
        {
            if(A==1)
            {
                H = (N-1)/2;
                T = N-H;
            }
            else
                T =(N-1)/2;
                H = N-T;
        }

        if(B == 1)
            cout<<H<<endl;
        else
            cout<<T<<endl;
    }

    }
}
