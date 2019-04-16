#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,A;
    cin>>N>>K>>A;
    int lol[N];

    string Mn = "YES";
    for(int i=0;i<N;i++)
        {
            cin>>lol[i];
            if(lol[i]>=K and lol[i]<=A)
                continue;
            else
                Mn = "NO";
        }
    cout<<Mn<<endl;
}
