#include <iostream>
#include <string>

using namespace std;



int main() {
    int     T, i, ans;
    string  N;
    bool    is_low;

    cin >> T;

    while (T--) {
        ans = 0;
        cin >> N;
        is_low = false;
        i = N.length();

        while (!is_low && --i > -1) {
            if (N[i] != '0') {
                N[i]--;
                is_low = true;
            }
        }

        for (int j = 0; j < N.length(); j++) {
            ans *= 10;
            ans += N[j] - '0';
        }

        cout << ans << endl;
    }

    return(0);
}
