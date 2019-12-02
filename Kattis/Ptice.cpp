#include <iostream>
#include <string>

using namespace std;



int main() {
    int N;
    string  s;
    string  sa, sb, sg;
    int a, b, g, best;

    a = 0;
    b = 0;
    g = 0;
    sa = "ABC";
    sb = "BABC";
    sg = "CCAABB";
    cin >> N >> s;

    while (sa.length() < N) sa += sa;
    while (sb.length() < N) sb += sb;
    while (sg.length() < N) sg += sg;

    for (int i = 0; i < N; i++) {
        if (s[i] == sa[i])  a++;
        if (s[i] == sb[i])  b++;
        if (s[i] == sg[i])  g++;
    }

    best = max(max(a, b), g);

    cout << best << endl;
    if (a == best)  cout << "Adrian" << endl;
    if (b == best)  cout << "Bruno" << endl;
    if (g == best)  cout << "Goran" << endl;

    return(0);
}
