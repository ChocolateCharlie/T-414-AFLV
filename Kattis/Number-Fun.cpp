#include <iostream>

using namespace std;



bool    check(int a, int b, int c) {
    return(a + b == c || a - b == c || b - a == c || a * b == c || c * b == a || c * a == b);
}



int main() {
    int N;
    int a, b, c;

    cin >> N;

    while (N--) {
        cin >> a >> b >> c;
        cout << (check(a, b, c) ? "Possible" : "Impossible") << endl;
    }

    return(0);
}
