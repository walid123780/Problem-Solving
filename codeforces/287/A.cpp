#include<bits/stdc++.h>
using namespace std;
const int M = 10;
int fx[] = {0 , 0, 1, 1};
int fy[] = {0 , 1, 0, 1};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char c;
    int g[M][M] = {0};
    for(int i = 0 ; i < 4; i++)
    {
        string s;
        cin >> s;
        for(int j = 0 ; j < 4; j++)
        {
            if(s[j] == '#') g[i][j] = 1;
            else g[i][j] = 0;
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int one = 0 , zero = 0;
            for(int k = 0 ; k < 4; k++) {
                int tx = i + fx[k];
                int ty = j + fy[k];
                if(g[tx][ty] == 1) {
                    one ++;
                } 
                else zero ++;
            }
            if(one == 3 || one == 4) {
                cout << "YES" << endl;
                return 0;
            }
            if(zero == 3 || zero == 4) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}