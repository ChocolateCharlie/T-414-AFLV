#include <iostream>

using namespace std;



int main() {
    int N;
    cin >> N;

    if (N % 2)                          cout << "Either";
    if (N == 2 || N == 6 || N == 10)    cout << "Odd";
    if (N == 4 || N == 8)               cout << "Even";

    return(0);
}
