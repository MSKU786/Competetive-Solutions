//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--)
//    {
//        string S
//        cin>>S;
//        int L = S.length();
//        int count=0;
//        for(int i=0;i<L-1;i++)
//        {
//            if(S[i]=='<')
//            {
//                for(int j=i+1;j<L;j++)
//                {
//                    if(S[j]=='>')
//                    {
//                        S[j]=='L';
//                        count=count+2;
//                        break;
//                    }
//                }
//            }
//        }
//        cout<<count<<endl;
//
//    }
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    string s;
	    cin>>s;
	    int count = 0;
	    int count1 = 0;
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='<'){
	            count++;
	        }
	        else{
	            count--;
	        }
	        if(count==0)count1=i+1;
	        else if(count<0)break;
	    }
	    cout<<count1<<endl;
	}
	return 0;
}
