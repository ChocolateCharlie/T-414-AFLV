#include <iomanip>
#include <iostream>

using namespace std;



int main () {
    double  C;
    int     L;
    double  w, l;
    double  r;

    r = 0.0;
    cin >> C >> L;

    while (L--) {
        cin >> w >> l;
        r += w * l * C;
    }

    cout << fixed << setprecision(7) << r;

    return(0);
}
