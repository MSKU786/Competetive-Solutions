#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int total,secret;
        cin>>total>>secret;
        int A[total];
        string ans = "NO";
        for(int i=0;i<total;i++){
            cin>>A[i];
            if(A[i]>=secret)
                ans = "YES";
        }
        cout<<ans<<endl;
    }
}
