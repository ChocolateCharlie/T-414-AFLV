#include <iostream>
#include <string>

using namespace std;



int main() {
    int     N;
    int     P;
    string  p;

    cin >> N >> P;
    getline(cin, p);    // End of line
    while(N--)  getline(cin, p);

    cout << P;

    return(0);
}
