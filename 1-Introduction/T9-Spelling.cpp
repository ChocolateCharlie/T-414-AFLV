#include <iostream>
#include <string>
#define NB_KEYS 9

using namespace std;

const string    g_keyboard[NB_KEYS] {
       "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz"
};

void    encrypt (string m);



int main() {
    int     N;
    string  message;

    cin >> N;
    getline(cin, message);

    for (int i = 1; i <= N; i++) {
        getline(cin, message);
        cout << "Case #" << i << ": ";
        encrypt(message);
    }

    return(0);
}



void    encrypt (string m) {
    int     prev_index;
    int     nb_press;

    prev_index = -1;

    for (int i = 0; i < m.length(); i++) {
        if (m[i] == ' ') {
                if (prev_index == 0)    cout << " ";
                prev_index = 0;
                cout << 0;
        }
        else {
            for (int j = 0; j < NB_KEYS; j++) {
                for (int k = 0; k < g_keyboard[j].length(); k++) {
                    if (m[i] == g_keyboard[j][k]) {
                        if (j == prev_index)        cout << " ";
                        prev_index = j;
                        for (int l = 0; l <= k; l++) cout << j + 1;
                    }
                }
            }
        }
    }

    cout << endl;
}
