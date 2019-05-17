#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int N,U,D,i=0,j=0;
        int a=0;
        cin>>N>>U>>D;
        int A[N];
        for( i=0;i<N;i++)
        {
            cin>>A[i];
        }

        bool exce = true;
        for(j=0;j<N-1;j++)
        {
            if(A[j]<A[j+1])
            {
                if(A[j+1]-A[j]<=U)
                    a++;
                else
                    break;
            }
            else if(A[j]==A[j+1])
                a++;
            else
            {
                if(A[j]-A[j+1]<=D)
                {
                    a++;
                }
                else if(A[j]-A[j+1]>D && exce)
                {
                    a++;
                    exce = false;
                }
                else
                    break;
            }
        }

        cout<<a+1<<endl;
}

    }
//    //https://www.codechef.com/problems/HILLS
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    while(n--)
//    {
//        int N,U,D,i=0,j=0;
//        int a=0;
//        cin>>N>>U>>D;
//        D=-D;
//        int A[N];
//        for( i=0;i<N;i++)
//        {
//            cin>>A[i];
//        }
//
//        bool exce = true;
//        for(j=0;j<N-1;j++)
//        {
//           int mine = A[j+1]-A[j];
//           if(mine<=U && mine>0)
//           {
//               a++;
//            }
//           else if(mine==0)
//                a++;
//           else if((mine<=D || exce) && mine<0)
//           {
//               a++;
//                if(mine<D)
//                    exce = false;
//                else
//                    break;
//           }
//           else
//            break;
//        }
//
//        cout<<a+1<<endl;
//}
//
//    }
