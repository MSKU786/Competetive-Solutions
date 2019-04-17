#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S[100];
    int sum=0;
    cin>>S;
    for(int i=0;S[i]!='\0';i++)
        {
            sum = sum+int(S[i])-96;
        }
    cout<<sum<<endl;
}
