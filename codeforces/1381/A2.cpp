#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, t , c = "$0";
        cin >> s >> t;
        t = '$' + t;
        vector < int > v;
        for(int i = 1; i < n; i++){
            c += '0';
            if(s[i] == '1' && s[i - 1] == '0') v.push_back(i);
            else if(s[i] == '0' && s[i - 1] == '1') v.push_back(i);
        }
        if(s[n-1] == '1') v.push_back(n);
        char ch = t[n];
        for(int i = n; i >= 1; i--){
            if(c[i] != t[i]){
                ch = t[i];
                v.push_back(i);
            }
            c[i- 1] = ch;
        }
        cout << v.size() <<" ";
        for(int i = 0 ; i < v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }



    return 0;
}
