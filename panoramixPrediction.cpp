#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i <= sqrt(x); i+=2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (!isPrime(m)) { 
        cout << "NO";
    } else {
        bool foundPrimeBetween = false;
        for (int i = n+1; i < m; i++) {
            if(isPrime(i)) {
                foundPrimeBetween = true;
            }
        }
        if (foundPrimeBetween) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    }

    return 0;
}
