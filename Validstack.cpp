#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int S,sum=0;
        cin>>S;
        int A[S];
        for(int i=0;i<S;i++)
        {
            cin>>A[i];
            if(A[i]==1)
                sum+=1;
            else
                sum-=1;
            A[i]=sum;

        }
        for(int j=0;j<S;j++)
        {

           if(A[j]>=0 and j==S-1)
             cout<<"Valid"<<endl;
           if(A[j]<0)
           {
            cout<<"Invalid"<<endl;
            break;
            }
        }
}
return 0;
}
