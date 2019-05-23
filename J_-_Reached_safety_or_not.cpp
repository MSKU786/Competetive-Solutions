#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,l=0;
    cin>>T;
    while(T--)
    {
        int M,N,Rx,Ry,x=0,y=0,n;
        cin>>M>>N;
        cin>>Rx>>Ry;
        cin>>n;
        string s;
        cin>>s;
        l++;
        for(int i=0;i<n;i++)
        {
            switch(s[i])
            {
                case 'U': y+=1;
                            break;
                case 'D': y-=1;
                            break;
                case 'L': x-=1;
                            break;
                case 'R': x+=1;
                            break;
            }
        }

        if((x==Rx)&&(y==Ry))
            cout<<"Case "<<l<<": REACHED"<<endl;

        else if((x<0)||(y<0)||(x>M)||(y>N))
            cout<<"Case "<<l<<": DANGER"<<endl;
        else
            cout<<"Case "<<l<<": SOMEWHERE"<<endl;
    }
}
