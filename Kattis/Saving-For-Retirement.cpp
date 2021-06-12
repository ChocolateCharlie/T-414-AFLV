#include <iostream>

using namespace std;



int main() {
    int B, Br, Bs, A, As;

    cin >> B >> Br >> Bs >> A >> As;

    cout << A + ((Br - B) * Bs) / As + 1;

    return(0);
}
