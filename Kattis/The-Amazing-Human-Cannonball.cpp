#include <cmath>
#include <iostream>

using namespace std;



int main() {
    int N;
    double  v0, T, x1, h1, h2;
    double  t, h;

    cin >> N;

    while (N--) {
        cin >> v0 >> T >> x1 >> h1 >> h2;
        t = x1 / (cos(T * 3.14 / 180.0) * v0);
        h = (v0 * t * sin(T * 3.14 / 180.0)) - (0.5 * 9.81 * t * t);

        if (h > h1 + 1 && h < h2 - 1)   cout << "Safe" << endl;
        else                            cout << "Not Safe" << endl;
    }

    return(0);
}
