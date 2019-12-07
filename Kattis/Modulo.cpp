#include <iostream>

using namespace std;



int main() {
    bool    m[42];
    int     n, temp;

    n = 0;
    for (int i = 0; i < 42; i++)    m[i] = false;

    for (int i = 0; i < 10; i++) {
        cin >> temp;

        if (!m[temp % 42]) {
            m[temp % 42] = true;
            n++;
        }
    }

    cout << n;

    return(0);
}
