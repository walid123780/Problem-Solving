#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if(n % 2 == 1) {
      cout << -1 << endl;
      return 0;
    } 
    vector<int>v(n + 1);
    for(int i = 1; i <= n; i++) {
       v[i] = i;
    }
    for(int i = 2; i <= n; i += 2) {
      swap(v[i], v[i - 1]);
    }
    for(int i = 1; i <= n ; i++) {
      cout << v[i] << " ";
    }
    cout<< endl;
    return 0;
}