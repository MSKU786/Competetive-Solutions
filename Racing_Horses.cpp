#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int S;
        cin>>S;
        long long M[S];
        long long temp =9999999999999 ;
        for(int i=0;i<S;i++)
        {
            cin>>M[i];
        }
        sort(M,M+S);
        for(int i=0;i<S-1;i++)
        {
            long long minner = M[i+1]-M[i];
            if( temp >minner)
                temp =  minner;

        }
        cout<<temp<<endl;
    }
}
