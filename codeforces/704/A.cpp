#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 69;
queue <pair<int , int>> dq;
queue < int > e[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , q;
    cin >> n >> q;
    int unread = 0 , i = 0 , f = 0;
    for(int i = 1; i <= q; i++) {
    	int t , x;
    	cin >> t >> x;
        if(t == 1) {
            unread += 1;
            dq.push({x , i});
            e[x].push(i);
        }
        else if(t == 2) {
            while(!e[x].empty()) {
                e[x].pop();
                unread--;
            }
        }
        else if(t == 3) {
            while(f < x) {
                if(dq.empty()) break;
                int i = dq.front().second;
                int v = dq.front().first;
                if(e[v].front() == i) {
                    e[v].pop();
                    unread--;
                }
                dq.pop();
                f++;
            }
        }
        cout << unread << endl;
    }
    return 0;
}