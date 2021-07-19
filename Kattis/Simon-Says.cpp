#include <iostream>
#include <string>

using namespace std;



int main() {
    int N, c_length;
    string  s, command;

    command = "Simon says";
    c_length = command.length();

    cin >> N;
    getline(cin, s);    // Trailing blank char

    while (N--) {
        getline(cin, s);

        if (s.compare(0, c_length, command) == 0) {
            cout << s.substr(c_length, -1) << endl;
        }
    }

    return(0);
}
