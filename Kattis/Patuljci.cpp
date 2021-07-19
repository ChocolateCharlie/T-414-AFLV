#include <iostream>
#include <vector>

using namespace std;



int main() {
    int dwarfs[9];
    int id1, id2, supp;

    id1 = 0;
    id2 = 1;
    supp = 0;
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        supp += dwarfs[i];
    }
    supp -= 100;

    while(!(dwarfs[id1] + dwarfs[id2] == supp && id1 != id2)) {
        if (id2 == 8) {
            id2 = -1;
            id1++;
        }
        id2++;
    }

    for (int i = 0; i < 9; i++) {
        if (i != id1 && i != id2)   { cout << dwarfs[i] << endl; }
    }

    return(0);
}
