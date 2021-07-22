#include <iostream>

using namespace std;



int gcd(int a, int b) {
    return(b ? gcd(b, a % b) : a);
}



int main() {
    int N, f, f_copy, r, g;

    cin >> N;
    cin >> f;

    while (--N) {
        f_copy = f;
        g = 1;
        cin >> r;

        do {
            f_copy /= g;
            r /= g;
            g = gcd(f_copy, r);
        }
        while (g != 1);

        cout << f_copy << "/" << r << endl;
    }

    return(0);
}
