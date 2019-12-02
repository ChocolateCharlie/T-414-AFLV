#include <iostream>

using namespace std;



int main() {
    int c[5] = { 0 };
    int s, wi, ws;

    wi = -1;
    ws = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> s;
            c[i] += s;
        }

        if (c[i] > ws) {
            wi = i;
            ws = c[i];
        }
    }

    cout << wi + 1 << " " << ws;

    return(0);
}
