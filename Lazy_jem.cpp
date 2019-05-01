#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long problem,brek,speed,total_time=0,copie;
        cin>>problem>>brek>>speed;
        do{
                copie = problem;
                if(problem%2==0)
                    problem = problem/2;
                else
                    problem = (problem+1)/2;
            total_time += (problem*speed)+brek;
            speed*=2;
            problem = copie-problem;
        }
        while(problem!=0);
        cout<<(total_time-brek)<<endl;
    }
}
