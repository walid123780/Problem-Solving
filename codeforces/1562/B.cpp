#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool check(int n)
{

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int  main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool found = false;
        for(int i = 0 ; i < s.size(); i++)
        {
            if( (s[i] != '2') && (s[i] != '3') && (s[i] != '5') && (s[i] != '7') )
            {
                cout<<"1"<<endl;
                cout<<s[i]<<endl;
                found = true;
                break;
            }
        }
        if(found == false)
        {
            for(int i = 0 ; i <s.size(); i++)
            {
                string t ="";

                for(int j = i+1 ; j < s.size(); j++)
                {
                    t += s[i];
                    t+= s[j];

                    int num = stoi(t);
                    if(check(num) == 0)
                    {
                        cout<<2<<endl<<num<<endl;
                        found = true;
                        break;
                    }
                    t = "";

                }
                if(found == true) break;
            }
        }
    }
    return 0;
}



