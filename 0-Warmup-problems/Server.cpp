#include <iostream>

using namespace std;



int main() {
    int     n;
    int     T;
    int     task;
    int     total;
    int     ans;

    ans = 0;
    total = 0;
    cin >> n >> T;

    while(n--) {
        cin >> task;

        total += task;
        if (total <= T) ans++;
    }

    cout << ans << endl;

    return(0);
}
