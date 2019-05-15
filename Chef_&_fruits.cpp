#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,Diff;
        cin>>A>>B>>Diff;
        if(abs(A-B)>=Diff)
            cout<<abs(A-B)-Diff<<endl;
        else
            cout<<"0"<<endl;
    }
}
//https://www.codechef.com/problems/FRUITS
