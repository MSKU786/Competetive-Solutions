#include<bits/stdc++.h>
using namespace std;
 int main()
 {

         long long a;
         int i=0;
         cin>>a;
         while(a)
         {
             a=a/10;
             i++;
             if(i>3)
                break;
         }
         if(i>3)
             cout<<"More than 3 digits"<<endl;
         else
            cout<<i<<endl;

 }
