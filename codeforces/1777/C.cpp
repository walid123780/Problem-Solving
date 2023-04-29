#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 69 ;
const int MAX = INT_MAX;
std::vector<int> dv[N];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   for(int i = 1; i <= 100002; i++){
      for(int j = i; j <= 100002; j += i){
         dv[j].push_back(i);
      }
   }
   int t;
   cin >> t;
   while(t--) {
      int n , m;
      cin >> n >> m;
      std::vector<int> v(n);
      for(int i = 0; i < n; i++){
         cin >> v[i];
      }
      sort(v.begin(), v.end());
      int freq[N] = {0}; 
      int mn = MAX;
      int i = 0 , j = 0 , ok = 0;
      while(j < n) {
         for(auto it : dv[v[j]]) {
            if((it >= 1 && it <= m) && !freq[it]) ok++;
            freq[it]++;
         }
         
         if(ok == m) {
            int diff = v[j] - v[i];
            mn = min (mn , diff);
            while(i < n) {
               for(auto it : dv[v[i]]) {
                  freq[it]--;
                  if((it >= 1 && it <= m) && !freq[it]) ok--;
               }
               i++;
               if(ok == m) {
                  int diff = v[j] - v[i];
                  mn = min (mn , diff);
               }
               else break;
            }
         }
         j++;
      }
      if(mn == MAX) cout << -1 << endl;
      else cout << mn << endl;
   }
   return 0;
}