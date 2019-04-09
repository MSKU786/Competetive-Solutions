#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        int n,k,v;
        int sum=0;
        cin>>n>>k>>v;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        double x = (((n+k)*v)-sum)/double(k);

        if(x<=0)
            cout<<"-1"<<endl;

        else if(abs(x-int(x)>0))
            cout<<"-1"<<endl;
        else
            cout<<int(x)<<endl;

}
}
