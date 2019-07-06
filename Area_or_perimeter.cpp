#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int L;
     cin>>L;
     int B;
     cin>>B;
     long long Area =0,peri=0;
     Area = L*B;
     peri = 2*(L+B);
     if(Area>peri)
     {
         cout<<"Area"<<endl;
         cout<<Area<<endl;
     }
      else if(Area<peri)
     {
         cout<<"Peri"<<endl;
         cout<<peri<<endl;
     }
     else
     {
         cout<<"Eq"<<endl;
         cout<<peri<<endl;
     }
 }
