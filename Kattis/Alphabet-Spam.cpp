#include <iostream>
#include <string>

using namespace std;



int main() {
    string   s;
    int      w, l, u, sy;

    w = 0;
    l = 0;
    u = 0;
    sy = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '_')                        w++;
        else if (s[i] >= 'a' && s[i] <= 'z')    l++;
        else if (s[i] >= 'A' && s[i] <= 'Z')    u++;
        else                                    sy++;
    }

    cout << (double) w / (double) s.length() << endl;
    cout << (double) l / (double) s.length() << endl;
    cout << (double) u / (double) s.length() << endl;
    cout << (double) sy / (double) s.length() << endl;
}
