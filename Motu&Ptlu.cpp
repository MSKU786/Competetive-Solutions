#include<bits//stdc++.h>
using namespace std;
int main()
{
        int a = 0,j,sum=0;
        cin>>a;
        int Arr[a];
        for(j=0;j<a/2;j++)
        {
            sum+=(j+1)+((j+1)*2);
            Arr[j]=sum;
            if(Arr[j]>=a)
                break;
        }
        int s = a-Arr[j-1];
        cout<<s<<j+1<<endl;
        if(s>=(j+1))
            cout<<"MOTU"<<endl;
        else
            cout<<"PTLU"<<endl;

}
