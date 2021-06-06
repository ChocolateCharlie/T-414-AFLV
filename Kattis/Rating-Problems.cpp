#include <iomanip>
#include <iostream>

using namespace std;



int main() {
    double n, k, r, t;
    t = 0;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> r;
        t += r;
    }

    cout << setprecision(5) << ((t + (n - k) * (-3.0))) / n << " " << ((t + (n - k) * 3.0)) / n;

    return(0);
}
