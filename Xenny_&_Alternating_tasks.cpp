#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int length;
        cin>>length;
        int A[length],B[length];
        long long sum1=0,sum2=0;
        for(int i=0;i<length;i++)
        {
            cin>>A[i];
            if(i%2==0)
                sum1+=A[i];
            else
                sum2+=A[i];

        }
        for(int i=0;i<length;i++)
        {
            cin>>B[i];
            if(i%2==0)
                sum2+=B[i];
            else
                sum1+=B[i];

        }
        if(sum1<sum2)
            cout<<sum1<<endl;
        else
            cout<<sum2<<endl;
}
}
//https://www.codechef.com/problems/XENTASK
