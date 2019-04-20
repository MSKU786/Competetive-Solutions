//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long x,y;
//    char opera;
//    cin>>x;
//    cin>>y;
//    cin>>opera;
//        switch(opera)
//    {
//        case '+': cout<<int(x+y);
//                  break;
//        case '-': cout<<int(x-y);
//                  break;
//        case '*': cout<<int(x*y);
//                  break;
//        case '/':
//                  printf("%3f",(x*1.0)/y);
//    }
//
//}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll a,b;
char c;
cin>>a;
cin>>b;
cin>>c;
if(c=='+') cout<<a+b;
if(c=='-') cout<<a-b;
if(c=='*') cout<<a*b;
if(c=='/') printf("%f",(a*1.0)/b);
}
