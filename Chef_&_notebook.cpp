#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        bool flag = false;
        for(int i=0;i<N;i++)
        {
            int P,C;
            cin>>P>>C;
            if(P>=(X-Y)&&C<=K)
                flag = true;
        }
        if(flag)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
}
