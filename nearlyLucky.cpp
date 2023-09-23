#include <bits/stdc++.h>
using namespace std;
// This can be used to shorten the code.
#define w(i, x) while (i > x)
typedef long long ll;

string nearlyLuckyNo(ll n)
{
    int count = 0;
    w(n,0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;
        n /= 10;
    }
    if(count == 4 || count == 7) return "YES";
    else return "NO";
}

int main()
{
    ll a;
    cin >> a;
    cout << nearlyLuckyNo(a) << '\n';
    return 0;
}