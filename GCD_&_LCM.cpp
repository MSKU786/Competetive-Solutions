#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long A,B;
        cin>>A>>B;
        long long gcdC = gcd(A,B);
        cout<<gcdC<<" "<<((A*B)/gcdC);
    }
}
