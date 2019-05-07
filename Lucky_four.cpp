#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;

    while(N--)
    {
         string S;
         cin>>S;
         int sum=0;
         for(int i=0;i<S.length();i++)
         {
             if(S[i]=='4')
                sum++;
             else
                continue;
         }
         cout<<sum<<endl;
    }

}
