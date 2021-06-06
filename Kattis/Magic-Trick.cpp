#include <iostream>
#include <string>

using namespace std;



int main() {
    bool    guess;
    string  s;
    bool    alphabet[26];

    guess = true;
    for (int i = 0; i < 26; i++)    alphabet[i] = false;
    cin >> s;

    int i = 0;
    while (i < s.length() && guess) {
        if (alphabet[s[i] - 'a'])   guess = false;
        else                        alphabet[s[i]  - 'a'] = true;
        i++;
    }

    cout << (guess ? 1 : 0);

    return(0);
}
