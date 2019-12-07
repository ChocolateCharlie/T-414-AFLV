#include <iostream>

using namespace std;



int main() {
    int N, M;

    cin >> N >> M;

    if (M >= N)
        cout << "Dr. Chaz will have " << M - N
             << (M  - N == 1 ? " piece" : " pieces") << " of chicken left over!";
    else
        cout << "Dr. Chaz needs " << N - M << " more"
             << (N - M == 1 ? " piece" : " pieces") << " of chicken!";

    return(0);
}
