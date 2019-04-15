#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,k;
    cin>>l>>r>>k;
    if(r%k==0 and l%k==0)
        cout<<int(r/k)-int(l/k)+1<<endl;
    else{
        cout<<int(r/k)-int(l/k)<<endl;
    }
}
