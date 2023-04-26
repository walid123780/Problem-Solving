#include<bits/stdc++.h>
using namespace std;
string decToBinary(int n) {
    string s = "";
    for (int i = 31; i >= 0; i--) 
    {
        int k = n >> i;
        if (k & 1) {
            s += '1';
        }
        else if(!s.empty()) {
            s += '0';
        }
    }
    return s;
}
int binaryToDecimal(string str)
{
    int dec_num = 0;
      int power = 0 ;
    int n = str.length() ;
   
      for(int i = n-1 ; i>=0 ; i--){
      if(str[i] == '1'){
        dec_num += (1<<power) ;
      }
      power++ ;
    }
   
    return dec_num;
}

string Xor(string a, string b){
    string ans = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    while(i >= 0  && j >= 0)
    {
        if (a[i] == b[j])
            ans += "0";
        else
            ans += "1";
        i-- , j--;
    }
    while(i >= 0) {
        ans += a[i];
        i--;
    }
    while(j >= 0) {
        ans += b[j];
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            string s = decToBinary(i);
            for(int j = i + 1; j <= n; j++) {
                string t = decToBinary(j);
                string f = Xor(s , t);
                int k = binaryToDecimal(f);

                if((i + j) > k && k > j && k <= n) {
                    cnt ++;
                    // cout << i << " " << j  << " " << k << endl;
                 }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}