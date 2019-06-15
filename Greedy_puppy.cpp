#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a,b;
        cin>>a>>b;
        long long maximum = 0;
        for(int i=2;i<=b;i++)
        {
            if(a%i>=maximum)
                maximum = a%i;
        }
        cout<<maximum<<endl;
    }
}
