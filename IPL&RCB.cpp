#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n=0;
 cin>>n;
 while(n--)
 {
     int x,y,sum=0;
     cin>>x>>y;
     if(x<=y)
        cout<<"0"<<endl;
     else
     {
         int i=0;
         for(i=1;i<=(x/2);i++)
         {
             sum = 2*i+(y-i);
             if(sum==x)
             {
                cout<<i<<endl;
                break;
             }
        }

     }
 }
 return 0;
}
