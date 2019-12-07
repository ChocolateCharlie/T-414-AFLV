#include <iostream>

using namespace std;



int main() {
    int T;
    int n, prev, i;

    cin >> T;

    while (T--) {
        i = 0;
        prev = 1;
        cin >> n;

        while (n != 0) {
            if (n > prev * 2)   i += (n - prev * 2);
            prev = n;
            cin >> n;
        }

        cout << i << endl;
    }

    return(0);
}
