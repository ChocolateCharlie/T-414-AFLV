#include <iostream>

using namespace std;



int main() {
    int N, l, t;

    t = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> l;
        t += l;
    }

    cout << t - N + 1;

    return(0);
}
