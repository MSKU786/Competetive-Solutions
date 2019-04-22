#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int count=0;
        int A[100];
        for(int i=0;i<100;i++)
            cin>>A[i];
        for(int i=0;i<100;i++)
        {
            if(A[i]<=30)
                count++;
            if(count==60)
                break;
        }
        if(count>=60)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
