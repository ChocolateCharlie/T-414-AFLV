#include <iostream>
#include <string>

using namespace std;



int main() {
    string  t;
    int ans;

    cin >> t;
    ans = t.length();

    for (int i = 0; i < t.length(); i += 3) { if (t[i] == 'P')  ans--; }
    for (int i = 1; i < t.length(); i += 3) { if (t[i] == 'E')  ans--; }
    for (int i = 2; i < t.length(); i += 3) { if (t[i] == 'R')  ans--; }

    cout << ans;

    return(0);
}
