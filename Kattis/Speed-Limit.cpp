#include <iostream>

using namespace std;



int main() {
    int n;
    int s, t;
    int d, prev;

    cin >> n;

    while (n != -1) {
        d = 0;
        prev = 0;

        for (int i = 0; i < n; i++) {
            cin >> s >> t;
            d += (s * (t - prev));
            prev = t;
        }

        cout << d << " miles" << endl;
        cin >> n;
    }

    return(0);
}
