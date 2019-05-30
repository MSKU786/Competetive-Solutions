#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {   bool flag = true;
            if(i==2 || i==3)
            {
                cout<<i<<endl;
                continue;
            }
            if(i%2==0||i==1)
                continue;
            for(int j=3;j<=sqrt(i)+1;j=j+2)
            {
                if(i%j==0)
                {
                    flag = false;
                    break;
            }

            }
            if(flag==true)
                cout<<i<<endl;
    }
    cout<<endl;
}
}
