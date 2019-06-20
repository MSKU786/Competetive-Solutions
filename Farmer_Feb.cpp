#include<bits/stdc++.h>
using namespace std;
   bool isPrime(int a)
    {
        int flag = 1;
        if(a%2==0)
             return false;
        for(int j=3;j<=sqrt(a)+1;j=j+2)
            {
                if(a%j==0)
                {
                  return false;
                }
            }
        return true;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a ,b;
        cin>>a>>b;
        for(int i=a+b+1; ; i++)
        {
            if(isPrime(i))
            {
                 cout<<i-(a+b)<<endl;
                break;
            }
        }

    }
}
