#include <iostream>

using namespace std;



int main() {
    int r, c, temp;
    int p_spaces[5];

    for (int i = 0; i < 5; i++) { p_spaces[i] = 0; }
    cin >> r >> c;

    char    p_map[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) { cin >> p_map[i][j]; }
    }

    // Compute answer
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            temp = 0;
            if (p_map[i][j] == 'X') { temp++; }
            if (p_map[i + 1][j] == 'X') { temp++; }
            if (p_map[i][j + 1] == 'X') { temp++; }
            if (p_map[i + 1][j + 1] == 'X') { temp++; }
            if (p_map[i][j] == '#' || p_map[i + 1][j] == '#' || p_map[i][j + 1] == '#' || p_map[i + 1][j + 1] == '#') { temp = -1; }
            if (temp > -1)  { p_spaces[temp]++; }
        }
    }

    for (int i = 0; i < 5; i++) { cout << p_spaces[i] << endl; }

    return(0);
}
