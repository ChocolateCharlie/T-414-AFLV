#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;



int main() {
    int     N;
    double  b;
    double  p;

    cin >> N;

    while (N--) {
        cin >> b >> p;

        cout << fixed << setprecision(4) << 60.0 / p * b - 60.0 / p << " ";
        cout << fixed << setprecision(4) << 60.0 / p * b << " ";
        cout << fixed << setprecision(4) << 60.0 / p * b + 60.0 / p << endl;
    }

    return(0);
}
