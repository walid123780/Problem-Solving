#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
int main() {
    int n;
    cin >> n;
    if(isPrime(n)) {
        cout << 1 << endl;
    }
    else if(n % 2) {
        int f = n - 2;
        if(isPrime(f)) {
            cout << 2 << endl;
        }
        else cout << 3 << endl;
    }
    else cout << 2 << endl;
    return 0;
}
