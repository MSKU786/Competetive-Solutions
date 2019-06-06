#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        bool flag = true;
        int len = S.length();
        for(int i=0;i<len-1;i++)
        {
            if(S[i+1]-S[i]<0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}
