#include <iostream>

using namespace std;



int main() {
    int N, K;
    int s, nb_o;

    cin >> N;

    while (N--) {
        nb_o = 1;
        cin >> K;

        for (int i = 0; i < K; i++) {
            cin >> s;
            nb_o += s;
        }

        cout << nb_o - K << endl;
    }

    return(0);
}
