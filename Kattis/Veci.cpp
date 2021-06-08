#include <algorithm>
#include <iostream>
#include <string>

using namespace std;



int main() {
    bool    exists;
    string  number;

    exists = false;
    cin >> number;

    int i = number.length() - 2;
    int low_id = -1;

    while (i > -1 && !exists) {
        if (number[i + 1] > number[i]) {
            low_id = i;
            exists = true;
        }
        i--;
    }

    char    lowest_high = 'a' + 1;
    int     lh_id = -1;

    if (exists) {
        for (int j = i + 1; j < number.length(); j++) {
            if (number[j] > number[low_id] && number[j] < lowest_high) {
                lowest_high = number[j];
                lh_id = j;
            }
        }

        char temp = number[low_id];
        number[low_id] = number[lh_id];
        number[lh_id] = temp;

        sort(number.begin() + low_id + 1, number.end());
    }

    cout << (exists ? number : "0");

    return(0);
}
