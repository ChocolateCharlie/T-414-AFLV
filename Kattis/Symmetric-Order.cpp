#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
    int n;
    int i;

    i = 1;
    cin >> n;

    while (n != 0) {
        vector<string> names(n);
        for (int i = 0; i < n; i++) cin >> names[i];

        cout << "SET " << i << endl;
        for (int i = 0; i < n; i += 2)  cout << names[i] << endl;
        for (int i = (n % 2 ? n - 2 : n - 1); i > -1; i -= 2)
            cout << names[i] << endl;

        cin >> n;
        i++;
    }

    return(0);
}
