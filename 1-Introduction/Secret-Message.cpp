#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void    encrypt (string m);



int main() {
    int     N;
    string  message;

    cin >> N;

    while (N--) {
        cin >> message;
        encrypt(message);
    }

    return(0);
}



void    encrypt (string m) {
    int     l;
    int     sr;
    int     index;

// Find the size of the encryption grid
    l = m.length();
    sr = (int) sqrt(l);

    while (! (sr * sr == l)) {
        l++;
        sr = (int) sqrt(l);
    }

     while(l > m.length())   m += "*";

// Create the encryption grid
    char    grid[sr][sr];

    index = 0;
    for (int i = 0; i < sr; i++) {
        for (int j = 0; j < sr; j++) {
            grid[i][j] = m[index++];
        }
    }

// Read the encrypted message
    for (int j = 0; j < sr; j++) {
        for (int i = sr - 1; i > -1; i--) {
            if (grid[i][j] != '*')  cout << grid[i][j];
        }
    }

    cout << endl;
}
