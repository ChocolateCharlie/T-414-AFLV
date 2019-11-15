#include <iostream>
#include <vector>

using namespace std;



int main() {
    int     N;
    int     M;
    int     l;

    l = 0;
    cin >> N >> M;

    vector<int> p(N + M);
    for (int i = 0; i < N + M; i++) p[i] = 0;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            p[i + j - 1]++;
            if (p[i + j - 1] > l)   l = p[i + j - 1];
        }
    }

    for (int i = 0; i < N + M; i++) if (p[i] == l)  cout << i + 2 << endl;

    return(0);
}
