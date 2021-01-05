#include <iostream>
#include <vector>

using namespace std;



int main() {
    int n;

    cin >> n;

    vector<int> l(n);

    for (int i = 0; i < n; i++) cin >> l[i];

    while (--n) {
        cout << l[n] << endl;
    }
    cout << l[0] << endl;

    return(0);
}
