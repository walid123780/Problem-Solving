#include<bits/stdc++.h>
using namespace std;

const int N = 100; 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){

    	int n , positive;
    	cin >> n >> positive;
    	std::vector<int> v(N + 1 , 0); 
        int x = 0;
        while((x + 1) * (x + 2) / 2  <= positive) x++;
        int f =  (x * (x + 1)) / 2;
        for(int i = 0; i < n; i++){
            if(i < x) v[i] = 2;
            else if(i == x) v[i] = - 2 * x - 1 + 2 * (positive - f);
            else v[i] = -1000;
        }
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";   
        }
        cout << endl;
    }
    return 0;
}