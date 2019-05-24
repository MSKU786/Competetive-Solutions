#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double X1,X2,X3,V1,V2;
        cin>>X1>>X3>>X2>>V1>>V2;
        double d1 = (X2-X1)/V1;
        double d2 = (X3-X2)/V2;
        if(d1==d2)
            cout<<"Draw"<<endl;
        else if(d1>d2)
            cout<<"Kefa"<<endl;
        else
            cout<<"Chef"<<endl;
    }
}
