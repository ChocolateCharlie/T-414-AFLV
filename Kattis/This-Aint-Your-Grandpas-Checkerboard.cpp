#include <iostream>

using namespace std;



int main() {
    int     n;
    bool    is_correct;
    int     bc, br, wc, wr, ci, ri;

    is_correct = true;
    cin >> n;

    char    board[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> board[i][j];
    }

    for (int i = 0; i < n; i++) {
        bc = 0;
        br = 0;
        wc = 0;
        wr = 0;
        ci = 1;
        ri = 1;

        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'B') bc++;
            else                    wc++;
            if (board[j][i] == 'B') br++;
            else                    wr++;

            if (j > 0 && board[i][j - 1] == board[i][j])    ci++;
            else                                            ci = 1;
            if (j > 0 && board[j - 1][i] == board[j][i])    ri++;
            else                                            ri = 1;

            if (ci > 2 || ri > 2)   is_correct = false;
        }

        if (bc != wc || br != wr)   is_correct = false;
    }

    cout << (is_correct ? 1 : 0);

    return(0);
}
