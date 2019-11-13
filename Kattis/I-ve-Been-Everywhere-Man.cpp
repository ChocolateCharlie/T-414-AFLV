#include <iostream>
#include <string>

using namespace std;



int main () {
    int     T;
    int     n;
    int     r;
    bool    is_new;

    cin >> T;

    while (T--) {
        r = 0;
        cin >> n;
        string  cities[n];

        for (int i = 0; i < n; i++) {
            is_new = true;
            cin >> cities[i];

            for (int j = 0; j < i; j++) {
               if (cities[i] == cities[j]) is_new = false;
            }
            if (is_new) r++;
        }
        cout << r << endl;
    }

    return(0);
}
