#include<bits/stdc++.h>
using namespace std;
int arr[6] ={0};

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while(t--){
        int mid = -1;
        cin >> n;

        int m = n * n;
        map< int , int > mp;
        priority_queue<pair<int,int>>q;
        int grid[n+1][n+1];
        memset(grid , 0 , sizeof(grid));
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            mp[x] += 1;
        }
        if(n == 1) {
            cout << "YES" << endl;
            for(auto it : mp){
                cout << it.first << endl;
            }
            return 0;
        }
        for(auto [key , value] : mp){
            if((value / 4) > 0) {

                arr[4] += (value / 4);
                q.push(make_pair((value - (value % 4)) , key));
                value %= 4;
            }
            if((value / 2) > 0) {
                arr[2] += (value / 2);
                q.push(make_pair((value - (value % 2)) , key));
                value %= 2;

            }
            if(value == 1){
                arr[1] += 1;
                mid = key;
            }
        }
        int f = n / 2;
        int k = f * f;
        bool check = false;
        if(arr[4] >= k && arr[4] <= (k + f)){
            if(arr[2] <= (f * 2)){
                if(arr[1] == 1 && n % 2 == 1) check = true;
                else if(n % 2 == 0) check = 1;
            }
        }
        
        if(check){
            cout << "YES" << endl;
            int x , y;
            y = q.top().first; x = q.top().second;
            for(int i = 0; i < f; i++){    
               for(int j = 0; j < f ; j++){
                if(y == 0) {q.pop(); y = q.top().first; x = q.top().second;}

                if(!grid[i][j]) {y--;grid[i][j] = x;}
                if(!grid[i][n - j - 1]) {y--;grid[i][n - j - 1] = x;}
                if(!grid[n - i  - 1][j]) {y--;grid[n - i - 1][j] = x;}
                if(!grid[n - i - 1][n - j - 1]) {y--; grid[n - i - 1][n - j - 1] = x;}
            }   
        }
        if(n%2){
            for(int i=0;i<n/2;i++){
                if(y == 0) {q.pop(); y = q.top().first; x = q.top().second;}
                if(!grid[i][n/2]){grid[i][n/2]= x; y--;}
                if(!grid[n-i-1][n/2]){grid[n-i-1][n/2]= x;y--;}
                if(y == 0) {q.pop(); y = q.top().first; x = q.top().second;}
                if(!grid[n/2][i]) {grid[n/2][i]= x; y--;}
                if(!grid[n/2][n-i-1]) {grid[n/2][n-i-1]= x;y--;}
            }
            grid[n/2][n/2]=mid;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    else cout << "NO" << endl;
}
return 0;
}