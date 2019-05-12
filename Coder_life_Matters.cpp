#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A[30],sum=0;
        string S = "#allcodersarefun";
        for(int i=0;i<30;i++)
        {
            cin>>A[i];
            sum+=A[i];
            if(sum>5 && A[i]==0)
            {
                S = "#coderlifematters";
                sum=0;
            }
        }
        cout<<S<<endl;
    }
}

