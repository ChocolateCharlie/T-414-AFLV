#include <iostream>
#include <string>

using namespace std;



int main() {
    string  m;
    int b;

    b = 1;
    cin >> m;

    for(int i = 0; i < m.length(); i++) {
        switch(m[i]) {
            case 'A':
                if (b == 1)         b = 2;
                else if (b == 2)    b = 1;
                break;
            case 'B':
                if (b == 2)         b = 3;
                else if (b == 3)    b = 2;
                break;
            case 'C':
                if (b == 3)         b = 1;
                else if (b == 1)    b = 3;
                break;
        }
    }

    cout << b;
}
