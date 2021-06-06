#include <iostream>

using namespace std;



int main() {
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;

    cout << (ws + 2 <= wc && hs + 2 <= hc) ? 1 : 0;

    return(0);
}
