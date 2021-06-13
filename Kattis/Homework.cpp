#include <iostream>
#include <stdio.h>

using namespace std;



int main() {
    int     a, b, ans;
    char    c;

    ans = 0;
    c = ';';

    while (c == ';') {
        cin >> a;
        c = getchar();
        if (c == '-') {
            cin >> b;
            c = getchar();
            ans += (b - a);
        }
        ans++;
    }

    cout << ans;

    return(0);
}
