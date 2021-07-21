#include <iostream>
#include <math.h>
#include <string>

using namespace std;



int main() {
    int nb_tc, s_size;
    string  m;

    cin >> nb_tc;

    while (nb_tc--) {
        cin >> m;
        s_size = sqrt(m.length());

        for (int i = s_size; i > -1; i--) {
            for (int j = i - 1; j < m.length(); j += s_size) {
                cout << m[j];
            }
        }
        cout << endl;
    }

    return(0);
}
