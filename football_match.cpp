#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,N,a=0,b=0;
    string t1,t2;
    cin>>n;
    while(n--)
    {
        cin>>N;
        string Main[N+1];

        string M="";
        int count1=0,count2=0;
        for(int i = 0;i<N;i++)
        {
           cin>>Main[i];
           if(Main[i]==Main[0])
               count1++;

            if(Main[i]!=Main[0])
           {
               count2++;
               M = Main[i];

           }

        }


        if(count1==count2)
            cout<<"Draw"<<endl;
        else if(count1>count2)
            cout<<Main[0]<<endl;
        else
            cout<<M<<endl;
}
    return 0;
}
