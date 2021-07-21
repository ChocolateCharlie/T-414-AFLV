#include <iostream>
#include <vector>

using namespace std;



int main() {
    int T, N, prev, temp;

    cin >> T;

    while (T--) {
        cin >> N;

        vector<int> deck(N);
        for (int i = 0; i < N; i++) { deck[i] = -1; }
        if (N == 1) { deck[0] = 1; }
        else        {
            deck[1] = 1;
            prev = 1;

            for (int i = 2; i <= N; i++) {
                temp = 0;
                while (temp != i + 1) {
                    prev++;
                    if (prev >= N)          { prev = 0; }
                    if (deck[prev] == -1)   { temp++; }
                }
                deck[prev] = i;
            }
        }

        for (int i = 0; i < N; i++) { cout << deck[i] << " "; }
        cout << endl;
    }

    return(0);
}
