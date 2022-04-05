#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len=s.size();
        int cnt=0,c=0;
        for(int i=1;i<len;i++){
            if(s[i]=='0' && s[i-1]=='0')cnt+=2;
        }
        for(int i=2;i<len;i++){
            if(s[i]=='0' && s[i-1]=='1' && s[i-2]=='0')cnt+=1;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
