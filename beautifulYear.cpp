#include <bits/stdc++.h>
using namespace std;
// This can be used to shorten the code.
#define loop(i,a,b) for (int i = a; i <= b; i++)

int func(int n,int num) {
    int x=num;
    loop(i,0,4) {
        int a = num%10;
        int copy = num/10;
        while(copy>0) {
            if(a == copy%10) {
                return func(n,x+1);
            }
            else copy/=10;
        }
        num/=10;
    }
    return x;
}

int main() {
    int year ;
    cin >> year;
    cout << func(year,year+1);
    return 0;
}
