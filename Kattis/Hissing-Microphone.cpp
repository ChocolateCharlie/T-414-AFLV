#include <iostream>
#include <string>

using namespace std;



int main() {
    string  s;
    bool    hiss;

    hiss = false;
    cin >> s;

    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == 's' && s[i] == 's')
            hiss = true;
    }
    cout << (hiss ? "hiss" : "no hiss");

    return(0);
}
