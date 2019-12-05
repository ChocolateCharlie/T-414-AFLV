#include <iostream>

using namespace std;



int main() {
    int G, S, C;
    int c;

    cin >> G >> S >> C;
    c = 3 * G + 2 * S + C;

    if (c>= 8)          cout << "Province or ";
    else if (c >= 5)    cout << "Duchy or ";
    else if (c >= 2)    cout << "Estate or ";

    if (c >= 6)         cout << "Gold";
    else if (c >= 3)    cout << "Silver";
    else                cout << "Copper";

    return(0);
}
