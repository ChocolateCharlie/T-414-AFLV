#include <iostream>

using namespace std;



int main() {
    int     N;
    int     t;

    cin >> N;

    while (N--) {
        cin >> t;
        cout << t << " is " << (t % 2 ? "odd" : "even") << endl;
    }

    return(0);
}
