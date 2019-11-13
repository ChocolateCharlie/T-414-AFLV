#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool    decreasing (int a, int b)   { return (a > b); }



int main() {
    int     N;
    int     r;

    r = 0;
    cin >> N;

    vector <int>    a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.begin(), a.end(), decreasing);
    for (int i = 0; i < N; i++) if (a[i] + i + 2 > r)   r = a[i] + i + 2;

    cout << r;

    return(0);
}
