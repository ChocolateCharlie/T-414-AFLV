#include <iostream>
#include <string>

using namespace std;



int main() {
    int L, x;
    string  e;
    int p;
    int t, ans;

    t = 0;
    ans = 0;
    cin >> L >> x;

    while (x--) {
        cin >> e >> p;

        if (e == "leave")   t -= p;
        else {
            if (t + p > L)  ans++;
            else            t += p;
        }
    }

    cout << ans;

    return(0);
}
