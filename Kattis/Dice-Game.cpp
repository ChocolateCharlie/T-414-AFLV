#include <iostream>

using namespace std;



int main() {
    double  pe, pg;
    double  a, b;

    pe = 0.0;
    pg = 0.0;

    for (int i = 0; i < 2; i++) {
        cin >> a >> b;
        pg += ((a + b) / 2);
    }

    for (int i = 0; i < 2; i++) {
        cin >> a >> b;
        pe += ((a + b) / 2);
    }

    if (pe == pg)   cout << "Tie";
    else            cout << (pe > pg ? "Emma" : "Gunnar");

    return(0);
}
