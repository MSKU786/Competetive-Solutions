#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string A;
        int count=0;
        cin>>A;
        for(int i=0;i<N;i++)
        {
            if(A[i]=='1')
            {
                cout<<"m chla"<<endl;
                if(i==0)
                    A[i+1]='1';
                else if(i==N-1)
                    A[i-1]='1';
                else
                {
                    A[i+1]='1';
                    A[i-1]='1';
                }
            }
        }
        for(int j=0;j<N;j++)
        {
            cout<<A[j]<<endl;

            if(A[j]=='0')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
