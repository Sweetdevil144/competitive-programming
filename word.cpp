#include <bits/stdc++.h>
using namespace std;
// This can be used to shorten the code.
#define loop(i,a,b) for (int i = a; i < b; i++)

string getWord(string s) {
    int lowerCount=0,upperCount=0;
    loop(i,0,s.length()) {
        if(int(s[i])>=65 && int(s[i])<=90) upperCount++;
        else lowerCount++;
    }
    if(upperCount>lowerCount) {
        loop(i,0,s.length()) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        loop(i,0,s.length()) {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << getWord(s) <<'\n';
    return 0;
}