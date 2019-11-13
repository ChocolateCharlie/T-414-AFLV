#include <iostream>

using namespace std;

int factorial   (int n);



int main () {
    int     T;
    int     N;

    cin >> T;

    while (T--) {
        cin >> N;
        cout << factorial(N) << endl;
    }

    return(0);
}



int factorial   (int n) {
    int     r;

    r = 1;
    for (int i = 1; i <= n; i++) {
        r *= i;
        r %= 10;
    }

    return(r);
}
