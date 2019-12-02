#include <algorithm>
#include <iostream>

using namespace std;

char    g_rank[] = {
    'A', '2', '3', '4',
    '5', '6', '7', '8',
    '9', 'T', 'J', 'Q', 'K'
};



int main() {
    char    c;

    int hand[13] = {0};

    for (int i = 0; i < 5; i++) {
        cin >> c;
        cin.ignore();

        for (int i = 0; i < 13; i++) {
            if (c == g_rank[i]) hand[i]++;
        }
    }

    cout << *max_element(hand, hand+13);

    return(0);
}
