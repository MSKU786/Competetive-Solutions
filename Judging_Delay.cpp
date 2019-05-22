#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,counting=0;
        cin>>N;
        while(N--)
        {
            long a,b;
            cin>>a>>b;
            if(b-a>5)
                counting++;
        }
        cout<<counting<<endl;
    }
}
