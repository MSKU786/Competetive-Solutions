#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Real[123]={0},Fake[123]={0};
        string A;
        cin>>A;
        string B;
        cin>>B;
        int count=0;
        int Len1 = A.length();
        int Len2 = B.length();
        for(int i=0;i<Len1;i++)
        {
            Real[A[i]]++;
        }
        for(int j=0;j<Len2;j++)
            {
            Fake[B[j]]++;
            }
        for(int i=0;i<123;i++)
        {
            count+=min(Real[i],Fake[i]);
        }
        cout<<count<<endl;
    }
}
