#include <iostream>

using namespace std;

int long_solution(int N) {
    int ans;

    ans = N * 2;

    while (N--) {
        ans += N;
    }

    return (ans);
}

int short_solution(int N) {
    int t;

    t = (N % 2 ? (N + 1) / 2 : 0);

    return((N + 1) * (N / 2) + N + t);
}

int main() {
    int P, K, N;
    int t;

    cin >> P;

    while (P--) {
        cin >> K >> N;
        cout << K << " " << short_solution(N) << endl;
    }

    return(0);
}
