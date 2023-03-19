#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    	int n , m;
    	cin >> n >> m;
    	std::vector<int> v , a , b;
     for(int i = 0; i < n; i++){
          int x;
          cin >> x;
          a.push_back(x);
          v.push_back(x);    
     }
     for(int i = 0; i < m; i++){
          int x;
          cin >> x;
          b.push_back(x);
          v.push_back(x);   
     }
     sort(v.begin(), v.end());
     for(int i = 0; i < n; i++){
          int index = lower_bound(v.begin(), v.end() , a[i]) - v.begin() + 1;
          cout << index << " ";    
     }
     cout << endl;
     for(int i = 0; i < m; i++){
          int index = lower_bound(v.begin(), v.end() , b[i]) - v.begin() + 1;
          cout << index << " ";    
     }

     return 0;
}