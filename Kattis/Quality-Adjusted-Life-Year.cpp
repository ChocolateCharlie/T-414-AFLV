#include <iomanip>
#include <iostream>

using namespace std;



int main() {
    int     N;
    double  q, y;
    double  ans;

    ans = 0.0;
    cin >> N;

    while (N--) {
        cin >> q >> y;
        ans += q * y;
    }

    cout << fixed << setprecision(3) << ans;

    return(0);
}
