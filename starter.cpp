#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,three=0,five=0,fifteen=0;
        long long a15=0,a5=0,a3=0;
        cin>>a;
        three = (a-1)/3;
        five = (a-1)/5;
        fifteen = (a-1)/15;

         a3 = three*(6+((three-1)*3))/2;
         a5 = five*(10+((five-1)*5))/2;
         a15 = fifteen*(30+((fifteen-1)*15))/2;
         long long sum = a3+a5-a15;
        cout<<(sum)<<endl;
    }

}
