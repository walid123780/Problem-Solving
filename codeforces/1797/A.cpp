#include<bits/stdc++.h>
using namespace std;

int n , m;
int fx[] = {-1, 0, 1, 0};
int fy[] = {0, 1, 0, -1};
#define valid(nx,ny) nx>=1 && nx<=n && ny>=1 && ny<=m
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	
    	cin >> n >> m;
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	int cnt = 0 , cnt2 = 0;
    	for(int i = 0 ; i < 4 ; i++){
    		int nx = a + fx[i];
    		int ny = b + fy[i];
    		if(valid(nx , ny)) cnt += 1;
    	}
    	for(int i = 0 ; i < 4 ; i++){
    		int nx = c + fx[i];
    		int ny = d + fy[i];
    		if(valid(nx , ny)) cnt2 += 1;
    	}
    	cout << min(cnt , cnt2) << endl;
    }
    return 0;
}