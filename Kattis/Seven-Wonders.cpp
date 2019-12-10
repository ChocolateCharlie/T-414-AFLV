#include <iostream>
#include <string>

using namespace std;



int main() {
    string  g;
    int c[3];
    int score;

    score = 0;
    cin >> g;
    for (int i = 0; i < 3; i++) c[i] = 0;

    for (int i = 0; i < g.length(); i++) {
        switch(g[i]) {
            case 'T':
                c[0]++;
                break;
            case 'C':
                c[1]++;
                break;
            case 'G':
                c[2]++;
                break;
        }
    }

    for (int i = 0; i < 3; i++) score += (c[i] * c[i]);
    score += (min(min(c[0], c[1]), c[2]) * 7);

    cout << score;

    return(0);
}
