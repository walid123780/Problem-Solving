#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,x , r;
    cin>>n>>m>>x;
    r = x;
    string s = "";
    x--;
    if(n > m)
    {
        int f = 0;
        while(m > 0)
        {
            if(x == 0) break;
            if(!f)
            {
                s += "01";
                m--;
                n--;
                f = 1;
                x--;
                continue;
            }
            if(f == 1)
            {
                s +='0';
                n--;
                f = 2;
                x--;
                continue;
            }
            if(f == 2)
            {
                s +='1';
                m--;
                f = 1;
                x--;
                continue;
            }

        }
    }
    else if(m >= n)
    {
        int f = 0 ;
        while(n > 0)
        {
            if(x == 0) break;
            if(!f)
            {
                s +="10";
                m--;
                n--;
                f = 1;
                x--;
                continue;
            }
            if(f == 1)
            {
                s +="1";
                m--;
                f = 2;
                x--;
                continue;
            }
            if(f == 2)
            {
                s += "0";
                n--;
                f = 1;
                x--;
                continue;
            }
        }
    }
    if(s[s.size() - 1] == '0' || r == 1){
        while(n--){
            s+= '0';
        }
        while(m--){
            s+='1';
        }
        cout<<s<<endl;
        return 0;
    }
    if(s[s.size() - 1] == '1'){
        while(m--){
            s+= '1';
        }
        while(n--){
            s+='0';
        }
        cout<<s<<endl;
        return 0;
    }

}
