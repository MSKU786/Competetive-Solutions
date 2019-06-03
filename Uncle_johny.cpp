#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N],index;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        cin>>index;
        index = A[index-1];
        sort(A,A+N);
        for(int i=0;i<N;i++)
        {
            if(A[i]==index)
            {
                index = i;
                break;
            }
        }
        cout<<index+1<<endl;
    }
}
