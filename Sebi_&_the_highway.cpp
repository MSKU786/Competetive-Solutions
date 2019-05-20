#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long S,SB,FB,D,T;
        cin>>S>>SB>>FB>>D>>T;

        double speed = S+ (D*180);
        long differ1 = abs(speed-SB);
        long differ2 = abs(speed-FB);
        cout<<differ1<<" "<<differ2<<endl;
        if(differ1>differ2)
            cout<<"FATHER"<<endl;
        else if(differ1<differ2)
            cout<<"SEBI"<<endl;
        else if(differ1==differ2)
            cout<<"DRAW"<<endl;


    }
}
