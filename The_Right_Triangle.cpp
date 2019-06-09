#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,coun=0;
     int x1,y1,x2,y2,x3,y3;
     double d1=0,d2=0,d3=0;
    cin>>T;
    while(T--)
    {

        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        d1=(pow((x1-x2),2)+pow((y1-y2),2));
        d2=(pow((x1-x3),2)+pow((y1-y3),2));
        d3=(pow((x3-x2),2)+pow((y3-y2),2));

        if(d1+d2==d3)
            coun++;
        if(d1+d3==d2)
            coun++;
        if(d2+d3==d1)
            coun++;
    }
    cout<<coun;
}
//https://www.codechef.com/problems/RIGHTRI
