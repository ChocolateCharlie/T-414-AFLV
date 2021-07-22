#include <iostream>
#include <string>

using namespace std;



int main() {
    int R, C, Zr, Zc;
    string s;

    cin >> R >> C >> Zr >> Zc;

    while (R--) {
        cin >> s;

        for (int i = 0; i < Zr; i++) {
            for (int j = 0; j < C; j++) {
                for (int k = 0; k < Zc; k++) {
                    cout << s[j];
                }
            }
            cout << endl;
        }
    }

    return(0);
}
