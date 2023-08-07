#include <bits/stdc++.h>
using namespace std;
// This can be used to shorten the code.
#define w(i, x) while (i > x)
typedef long long ll;

string nearlyLuckyNo(ll n)
{
    ll copy = n;
    if (n / 10 == 0)
    {
        if (n == 4 && n == 7)
            return "YES";
        else
            return "NO";
    }
    ll count = 0, cf = 0, cs = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
            if(n==4) cf++;
            else cs++;
        }
        n /= 10;
    }
    if ((count == 4 || count == 7) && cs>0 &&cf>0)
        return "YES";
    w(copy, 0)
    {
        int a = copy % 10;
        if (a != 4 && a != 7)
            return "NO";
        copy /= 10;
    }
    return "YES";
}

int main()
{
    ll a;
    cin >> a;
    cout << nearlyLuckyNo(a);
    return 0;
}