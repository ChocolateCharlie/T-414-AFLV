#include <iostream>
#include <vector>

using namespace std;



int main() {
    int             N, pow;
    vector<bool>    binary_N;

    cin >> N;
    pow = 1;

    // Compute binary representation
    while (N > pow) { pow *= 2; }
    while(pow) {
        if (N >= pow) {
            binary_N.push_back(true);
            N -= pow;
        }
        else    { binary_N.push_back(false); }

        pow /= 2;
    }

    // Compute the reverse number
    // N = 0;
    if (!binary_N[0])   { binary_N.erase(binary_N.begin()); }
    pow = 1;
    for (int i = 0; i < binary_N.size(); i++) {
        if (binary_N[i])    { N += pow; }
        pow *= 2;
    }

    cout << N;

    return(0);
}
