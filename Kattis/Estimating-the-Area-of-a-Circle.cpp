#include <iostream>
#include <math.h>

using namespace std;



int main() {
    double  r, m, c;
    constexpr double pi = acos(-1);

    cin >> r >> m >> c;

    while (r || m || c) {
       cout << pi * r * r << " ";
       cout << 4 * r * r * c / m << endl;

       cin >> r >> m >> c;
    }

    return(0);
}
