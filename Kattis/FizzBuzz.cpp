#include <iostream>

using namespace std;



int main() {
    int X;
    int Y;
    int N;

    cin >> X >> Y >> N;

    for (int i = 1; i <= N; i++) {
        if (i % X && i % Y) cout << i;
        else {
            if (! (i % X))      cout << "Fizz";
            if (! (i % Y))      cout << "Buzz";
        }
        cout << endl;
    }

    return(0);
}
