#include <iostream>

using namespace std;



int main() {
    int X;
    int N;
    int P;

    cin >> X >> N;
    X *= (N + 1);

    while (N--) {
        cin >> P;
        X -= P;
    }

    cout << X;

    return(0);
}
