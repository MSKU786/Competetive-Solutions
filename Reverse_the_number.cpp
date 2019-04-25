#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        long long a;
        cin>>a;
        long long reve=0;
        int temp=0;
        int i =0;
        while(a)
        {
            temp =a%10;
            a=a/10;
            reve = (reve*10) + (temp);
            i++;
        }
        cout<<reve<<endl;
    }


}

