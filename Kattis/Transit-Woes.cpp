#include <iostream>
#include <vector>

using namespace std;



int bus_arrival(int curr, int b) {
    int t = 0;
    while (t < curr)    { t += b; }
    return(t);
}



int main() {
    int s, t, n;

    cin >> s >> t >> n;

    vector<int> d(n + 1);
    for (int i = 0; i <= n; i++) { cin >> d[i]; }

    vector<int> b(n);
    for (int i = 0; i < n; i++) { cin >> b[i]; }

    vector<int> c(n);
    for (int i = 0; i < n; i++) { cin >> c[i]; }

    // Inelegant but does the job
    for (int i = 0; i < n && s < t; i++) {
        s += d[i];
        s += (bus_arrival(s, c[i]) - s);
        s += b[i];
    }

    s += d[n];

    cout << (s <= t ? "yes" : "no");

    return(0);
}
