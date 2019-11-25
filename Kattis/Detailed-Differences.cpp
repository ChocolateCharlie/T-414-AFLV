#include <iostream>
#include <string>

using namespace std;



int main() {
    int     N;
    string  a, b;

    cin >> N;

    while (N--) {
        cin >> a >> b;
        cout << a << endl << b << endl;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i])   cout << ".";
            else                cout << "*";
        }
        cout << endl << endl;
    }

    return(0);
}
