#include <iostream>

using namespace std;



int main() {
    int     n;
    int     t;
    int     ans;

    ans = 0;
    cin >> n;

    while (n--) {
        cin >> t;
        if (t < 0)  ans++;
    }

    cout << ans;

    return(0);
}
