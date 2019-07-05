#include<bits/stdc++.h>
#define ll int long long
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        ll A[N],temp=0;
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(A[j]-A[i]>temp)
                    temp = A[j]-A[i];
            }
        }
        if(temp==0)
            cout<<"UNFIT"<<endl;
        else
            cout<<temp<<endl;

    }
}
