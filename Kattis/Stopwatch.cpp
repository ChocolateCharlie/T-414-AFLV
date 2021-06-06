#include <iostream>
#include <vector>

using namespace std;



int main() {
    int     n, ans, curr, prev;
    bool    state;

    curr = 0;
    ans = 0;
    state = false;
    cin >> n;

    for (int i = 0; i < n; i++) {
        prev = curr;
        cin >> curr;
        if (n % 2 == 0) {
            ans = state ? ans + curr - prev : ans;
            state = !state;
        }
    }

    if (n % 2)  cout << "still running";
    else        cout << ans;

    return(0);
}
