#include <bits/stdc++.h>
using namespace std;
// This can be used to shorten the code.
#define loop(i,a,b) for (int i = a; i <= b; i++)


int main() {
    std::cout << "Hello, World!" << std::endl;
    int x;
    cin >> x;
    cin.ignore();
//     getline() is used to get a String line input;
    while(x--) {
        string s1;
        getline(cin, s1);
        cout << s1 << '\n';
    }
    int a=0,b=10;
    loop(i,a,b) {
        cout << i << "  ";
    }
//    Using the command typedef it is possible to give a shorter name to a datatype. For example, the name long long is long, so we can define a shorter name ll:
    typedef long long ll;
    return 0;
}
