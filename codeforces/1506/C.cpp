#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s, t,m,ss;
        cin>>s>>ss;

        int mx = INT_MIN;
        for(int i = 0 ; i < s.size(); i++)
        {
            for(int j  = i  ;  j< s.size(); j++)
            {
                t+=s[j];
                for(int k =  0; k < ss.size() ; k++)
                {
                    for(int l = k ; l < ss.size() ; l++)
                    {
                        m+=ss[l];
//                        cout<<"input :"<<t<<endl;
//                        cout<<m<<endl;
                        if(t == m)
                        {
                            int r = t.size();
                            mx = max(mx,r);
                        }
                    }
                    m = "";
                }
            }
            t = "";
        }
        int len = s.size();
        int len1 = ss.size();
        len -= mx;
        len1 -=mx;
//        cout<<mx<<endl;
        cout<<len+len1<<endl;
    }
    return 0;
}
