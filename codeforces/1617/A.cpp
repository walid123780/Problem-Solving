#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        string s;
        string a;
        cin>>s;
        cin>>a;
        sort(s.begin(), s.end());
        int cnt=0,cc=0,cb=0;
        bool low=false;
        int len=s.size();
        if(a != "abc")
        {
            cout << s ;

        }
        else
        {
            for(int i=0; i<len; i++)
            {
                if(s[i]=='c')
                {
                    cnt++;
                }
                else if(s[i] == 'b')
                    cb++;
                else if(s[i] == 'a')
                    cc++;

            }
            if(cnt==len && cnt == 0 || cb == 0 || cc == 0)
            {
                cout<<s;
            }
            else
            {
                for(int j=0; j<len; j++)
                {
                    if(low==true && s[j]=='c')
                    {
                        continue;
                    }
                    else  if(s[j]==s[j+1] )
                    {
                        cout<<s[j];
                    }
                    else if(s[j]!=s[j+1] && low==false)
                    {
                        cout<<s[j];
                        while(cnt--)
                        {
                            cout<<"c";
                        }
                        low=true;
                    }

                    else if(low==true && s[j]!=s[j+1])
                    {
                        cout<<s[j];
                    }
                }
            }
        }
        cout<<endl;

    }
    return 0;
}
