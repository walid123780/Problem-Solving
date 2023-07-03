#include<bits/stdc++.h>
using namespace std;

struct myComp {
	bool operator()(const pair<double, int> a, const pair<double, int> b) {
		if (a.first == b.first) return a.second < b.second;
		else return a.first > b.first;
	}
};

int main() {
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    double percent = ((100 - k) / 100.00);
    std::vector<pair<double , int>> v;
   	for(int i = 1; i <= n; i++) {
   	 	 int a , b;
   	 	 cin >> a >> b;
   	 	 double x = (a * t1) * percent +  (b * t2);
   	 	 double y = (b * t1) * percent +  (a * t2);
   	 	 v.push_back({max(x , y) , i});
   	}  
   	sort(v.begin(), v.end() , myComp());
   	for(auto it : v) {
   		printf("%d %.2lf\n",it.second , it.first);
   	}
    return 0;
} 