#include <iostream>

using namespace std;



int main() {
    int     n, f_mark;
    char    ans, prev;

    f_mark = 0;

    cin >> n;
    cin >> prev;

    while (--n > 0) {
        cin >> ans;

        if (ans == prev)    f_mark++;
        prev = ans;
    }

    cout << f_mark;

    return(0);
}
