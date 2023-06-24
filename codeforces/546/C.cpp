#include<bits/stdc++.h>
using namespace std;

const int Exit = 1e6 + 69; 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int k1; cin >> k1;
    queue<int> q;
    for(int i = 0; i < k1; i++) {
    	int x; cin >> x;
    	q.push(x);
    }
    int k2; cin >> k2;
    queue<int> u;
    for(int i = 0; i < k2; i++) {
    	int x; cin >> x;
    	u.push(x);
    }
    int fight = 0 , winner = 1 , cnt = 0;
    while(!q.empty() && !u.empty()) {
        if(cnt > Exit) {
            cout << -1 << endl;
            return 0;
        }
        int a = q.front();
        int b = u.front();
        q.pop();
        u.pop();
        if(b > a) {
          u.push(a);
          u.push(b);
      }
      else {
          q.push(b);
          q.push(a);
      }
      fight += 1;
      cnt += 1;
  }
  if(q.empty()) winner = 2;
  cout << fight << " " << winner << endl;
  return 0;
}