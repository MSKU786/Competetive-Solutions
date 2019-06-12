#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int A[n];
        int cc=1;
        bool flag =true;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }

        if(n%2==0||A[0]!=1||A[n-1]!=1)
        {
            cout<<"no"<<endl;

            continue;
        }
        for(int i=0;i<n/2;i++)
        {
             if(A[i]==cc)
            cc++;
        }
        for(int i=n/2;i<n;i++)
        {
            if(A[i]==cc)
            cc--;
        }
        cc++;
        if(cc==1)
        cout<<"yes"<<"\n";
        else
        cout<<"no\n";
  }



}
//https://www.codechef.com/problems/TEMPLELA
