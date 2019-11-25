#include <iostream>

using namespace std;



int main() {
    int n[6] = { 1, 1, 2, 2, 2, 8 };
    int c;

    for (int i = 0; i < 6; i++) {
        cin >> c;
        cout << n[i] - c << " ";
    }

    return(0);
}
