#include <cmath>
#include <iostream>

using namespace std;



int main() {
    double  X;

    cin >> X;

    cout << (int) round(X * (5280.0 / 4854.0) * 1000.0);

    return(0);
}
