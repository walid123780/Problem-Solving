// C++ program to print all possible
// substrings of a given string
#include<bits/stdc++.h>
using namespace std;

bool find(string str) {
	int l = 0 , r = str.size() - 1;
	while (r > l) {
		if (str[l++] != str[r--]) {
			return false;
            // will return from here
		}
	}
	return true;
}
// Function to print all sub strings
void subString(string s, int n) {
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int len = 1; len <= n - i; len++) {
			string t = s.substr(i, len);
			int sz = t.size();
			if(find(t)) ans = max(ans , sz) ;
		}
	}
	cout << ans << endl;
}

// Driver program to test above function
int main()
{
	string s;
	cin >> s;
	subString(s, s.size());
	return 0;
}
