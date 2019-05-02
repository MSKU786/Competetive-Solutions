#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K,count =0;
        cin>>N>>K;
        int S[N];
        for(int i=0;i<N;i++)
        {
            cin>>S[i];
        }
        sort(S,S+N);
        for(int j=N-K;j>0;j--)
        {
            if(S[j]==S[j-1])
                count++;
            else
                break;
        }
        cout<<K+count<<endl;

    }
}
