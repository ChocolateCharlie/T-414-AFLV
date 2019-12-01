#include <iostream>
#include <map>

using namespace std;

map<char, int>  g_values = {
    { 'A', 11 }, { 'K', 4 }, { 'Q', 3 },
    { 'T', 10 }, { '8', 0 }, { '7', 0 }
};



int main() {
    int     N;
    char    B;
    char    nb, s;
    int     ans;

    ans = 0;
    cin >> N >> B;

    for (int i = 0; i < 4 * N; i++) {
        cin >> nb >> s;

        if      (nb == 'J') ans += (s == B ? 20 : 2);
        else if (nb == '9') ans += (s == B ? 14 : 0);
        else                ans += g_values[nb];
    }

    cout << ans;

    return(0);
}
