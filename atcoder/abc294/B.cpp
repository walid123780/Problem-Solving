#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    	int n , m;
    	cin >> n >> m;
    	int arr[n+1][m+1];
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < m; j++){
    				cin >> arr[i][j];
    		}	
    	}
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < m; j++){
    				if(arr[i][j] == 0) cout<<".";
    				else cout << ((char)(arr[i][j] + 64)) ;
    		}	
    		cout <<endl;
    	}
     return 0;
}