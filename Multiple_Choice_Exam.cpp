#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,count=0;
        cin>>N;
        string Qus,Ans;
        cin>>Qus;
        cin>>Ans;
        for(int i=0;i<N;i++)
        {
            if(Qus[i]==Ans[i])
                count++;
            else if(Ans[i]=='N')
                continue;
            else
                i++;
        }
          cout<<count<<endl;
    }
}
