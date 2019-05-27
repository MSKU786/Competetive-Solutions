#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        double sum =0;
        cin>>n;
        while(n--)
        {
            double a,b,c;
            cin>>a>>b>>c;
            sum += (a*b*c*c)/10000;
        }
            printf("%.8Lf\n",sum);
    }
}
