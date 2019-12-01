#include <iostream>

using namespace std;



int main() {
    int m, a, b, c;

    cin >> m >> a >> b >> c;

    cout << (a + b + c <= 2 * m? "possible" : "impossible");

    return(0);
}
