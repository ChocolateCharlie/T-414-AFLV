#include <iostream>
#include <string>

using namespace std;



int main() {
    int         N;
    long long   r;
    string      s;
    long long   t;
    long long   p;

    r = 0;
    cin >> N;

    while(N--) {
        t = 0;
        p = 1;
        cin >> s;

        for (int i = 0; i < s.length() - 1; i++)    t = t * 10 + s[i] - '0';
        for (int i = 0; i < (s[s.length() - 1] - '0'); i++) p *= t;
        r += p;
    }

    cout << r;

    return(0);
}
