#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



int main() {
    int         N;
    int         i;

    cin >> N;

    vector<int> b(N);
    for(i = 0; i < N; i++)  cin >> b[i];

    sort(b.begin(), b.end());

    i = 0;
    while(i < N) {
        if (i < N - 2 && b[i + 1] == b[i] + 1 && b[i + 2] == b[i + 1] + 1) {
            cout << b[i] << "-";
            while(i < N - 1 && b[i + 1] == b[i] + 1)    i++;
        }
        cout << b[i] << " ";
        i++;
    }

    return(0);
}
