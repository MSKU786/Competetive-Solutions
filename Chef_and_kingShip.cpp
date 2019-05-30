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
        long long temp =1 ;
        for(int i=0;i<S;i++)
        {
            cin>>M[i];
        }
        sort(M,M+S);
        for(int i=1;i<S;i++)
        {
            temp = temp + (M[0]*M[i]);
        }
        cout<<temp<<endl;
    }
}
