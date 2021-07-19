#include <iostream>

using namespace std;



int main() {
    int T, N, max_store, min_store, temp;

    cin >> T;

    while (T--) {
        max_store = -1;
        min_store = 100;
        cin >> N;

        while (N--) {
            cin >> temp;

            if (temp > max_store)   { max_store = temp; }
            if (temp < min_store)   { min_store = temp; }
        }

        cout << (max_store - min_store) * 2 << endl;
    }

    return(0);
}
