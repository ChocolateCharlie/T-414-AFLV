#include <iostream>

using namespace std;



int sum_of_digits(int n) {
    int s;

    s = 0;

    while (n) {
        s += (n % 10);
        n /= 10;
    }

    return(s);
}

int main() {
    int L, D, X;

    cin >> L >> D >> X;

    while (sum_of_digits(L) != X)   { L++; }
    while (sum_of_digits(D) != X)   { D--; }

    cout << L << endl << D;

    return(0);
}
