#include <iostream>

using namespace std;



bool    is_harshad(int  n) {
    int n_copy;
    int sof;

    n_copy = n;
    sof = 0;

    while (n_copy != 0) {
        sof += (n_copy % 10);
        n_copy /= 10;
    }

    return(n % sof == 0 ? true : false);
}

int main() {
    int     n;

    cin >> n;

    while(!is_harshad(n))   { n++; }

    cout << n;

    return(0);
}
