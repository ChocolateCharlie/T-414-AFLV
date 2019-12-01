#include <iostream>
#include <string>

using namespace std;



int main() {
    bool    got_away;
    string  s;

    got_away = true;

    for (int i = 0; i < 5; i++) {
        cin >> s;

        for (int j = 0; j < s.length() - 2; j++) {
            if (s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I') {
                got_away = false;
                cout << i + 1 << " ";
            }
        }
    }

    if (got_away)   cout << "HE GOT AWAY!";

    return(0);
}
