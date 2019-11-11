#include <iostream>
#include <string>
#include <vector>

using namespace std;

string  encrypt (string m, vector<int> k);



int main() {
    int     n;
    string  message;

    cin >> n;

    while(n) {
        vector<int> key(n);
        for (int i = 0; i < n; i++) cin >> key[i];

        getline(cin, message);  // for the endl
        getline(cin, message);  // for the message

        cout << "'" << encrypt(message, key) << "'" << endl;

        cin >> n;
    }

    return(0);
}



string  encrypt (string m, vector<int> k) {
    string  ans;

    while (m.length() % k.size() != 0)    m += ' ';

    for (int i = 0; i < m.length(); i += k.size()) {
        for (int j = 0; j < k.size(); j++)  ans += m[i + k[j] - 1];
    }

    return(ans);
}
