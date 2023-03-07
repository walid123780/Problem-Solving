#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	std::vector<int> v(n);
    	for(int i = 0 ; i <  n ; i++){
    		cin>>v[i];
    	}
    	deque<int > dq;
    	for(int i = 0 ;  i < n ; i++){
    		dq.push_back(v[i]);
    		while(dq.front() < dq.size()){
    			dq.pop_front();
    		}
    		cout<< (int)dq.size() <<' ';
    	}
    	cout<<endl;
    }
    return 0;
}