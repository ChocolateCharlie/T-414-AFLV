#include <iostream>

using namespace std;



int main() {
    int n;
    int b, d, ans;

    d = 0;
    ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b == -1)    d++;
        else            ans += b;
    }

    cout << (double) ans / (double) (n - d);
}
