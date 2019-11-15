#include <iostream>

using namespace std;

int greatest(int a, int b) {
    int     d;

    d = 10;

    while (true) {  // A bit dangerous but fits the constraints
        if (a % d != b % d)
            return(a % d > b % d ? a : b);
        d *= 10;
    }
}



int main() {
    int A;
    int B;
    int m;

    cin >> A >> B;
    m = greatest(A, B);

    cout << m % 10 << (m / 10) % 10 << (m / 100) % 10;

    return(0);
}
