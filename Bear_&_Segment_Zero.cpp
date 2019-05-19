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
         int counter = 0,sum=0;
        for(int i =0;i<S.length()-1;i++)
        {
            if(S[i]=='0' )

                continue;
            else if(S[i]=='1' and counter ==0)
            {
                sum++;
                if(S[i+1]=='0')
                {
                    counter = 1;
                    continue;
                }
                else if (S[i+1]=='1')
                {
                sum++;
                    continue;
                }

            }
            else if(S[i]=='1' and counter ==1)
            {   sum=0;
                break;
            }

        }
    if(S[S.length()-1]=='1')
    {
        if(counter==0)
            sum=2;
        if(counter==1)
            sum=0;

    }

    if(sum>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}

