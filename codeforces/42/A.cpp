#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e9;
int main()
{
	int n , k;
	cin >> n >> k;
	std::vector<int> a(n) , b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];	
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];		
	}
	int sum = std::accumulate(a.begin(), a.end(), 0);
	double mn = k;
	for(int i = 0; i < n; i++) {
		mn = min (1. * b[i] / a[i] * sum , mn);
	}
	printf("%.4lf\n", mn);
	return 0;
}	