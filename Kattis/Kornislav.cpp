#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



int main() {
    vector<int> integers(4);

    for (int i = 0; i < 4; i++) { cin >> integers[i]; }
    sort(integers.begin(), integers.end());

    cout << integers[0] * integers[2] << endl;

    return(0);
}
